#include<string.h>
int strStr(char* haystack, char* needle) {
    int hlen=strlen(haystack);
    int nlen=strlen(needle);
    for(int i=0;i<=hlen-nlen;i++)
    {
        int j;
        for(j=0;j<nlen;j++)
        {
          if(needle[j]!=haystack[i+j])
          {
             break;
          }
        }
        if(j==nlen)
        {
            return i;
        }
    }
    return -1;
}
