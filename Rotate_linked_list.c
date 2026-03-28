/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL || head->next==NULL || k==0)
    {
        return head;
    }
    int len=1;
    struct ListNode* temp=head;
    while(temp->next!=NULL)
    {
        len++;
        temp=temp->next;
    }
    temp->next=head;
    k=k%len;
    int steps=len-k;
    struct ListNode* newTail=head;
    for(int i=1;i<steps;i++)
    {
        newTail=newTail->next;
    }
    struct ListNode* newHead=newTail->next;
    newTail->next=NULL;
    return newHead;
}
