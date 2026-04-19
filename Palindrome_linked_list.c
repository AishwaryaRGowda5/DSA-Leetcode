/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
   int *a=malloc(100000*sizeof(int));
   int i=0;
   while(head)
   {
    a[i++]=head->val;
    head=head->next;
   }  
   for(int j=0;j< i/2;j++)
   {
    if(a[j]!=a[i-j-1])
    {
        return false;
    }
   }
   return true;
}
