#include<string.h>
int firstUniqChar(char* s) {
    int arr[26]={0};
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
            arr[s[i]-'a']++;
    }
     for(int i=0;i<n;i++)
        {
            if(arr[s[i]-'a']==1)
            {
                return i;
            }
        }
    return -1;
}
