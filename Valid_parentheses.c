bool isValid(char* s) {
    int n=strlen(s);
    int top=-1;
    char stack[n];
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        if(ch=='(') stack[++top]=')';
        else if(ch=='{') stack[++top]='}';
        else if(ch=='[') stack[++top]=']';
        else
        {
            if(top==-1 || stack[top]!=ch)
            {
                return false;
            }
            top--;
        }
    }
    return top==-1;
}
