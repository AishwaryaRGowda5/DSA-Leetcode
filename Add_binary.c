#include<stdlib.h>
#include<string.h>
char* addBinary(char* a, char* b) {
    int i=strlen(a)-1;
    int j=strlen(b)-1;
    int carry=0;
    int maxlen=(strlen(a)>strlen(b)?strlen(a):strlen(b))+2;
    char* result=(char*)malloc(maxlen);
    result[maxlen-1]='\0';
    int k=maxlen-2;
    while(i>=0 || j>=0 || carry)
    {
        int sum=carry;
        if(i>=0)
        {
            sum+=a[i--]-'0';
        }
        if(j>=0)
        {
            sum+=b[j--]-'0';
        }
        result[k--]=(sum % 2) + '0';
        carry=sum/2;
    }
    memmove(result,result+k+1,maxlen-k-1);
    return result;
}
