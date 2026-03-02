#include<string.h>
#include<stdbool.h>
bool isAnagram(char* s, char* t) {
    int slen=strlen(s);
    int tlen=strlen(t);
    if(slen!=tlen)
    {
        return false;
    }
    int count[26]={0};
    for(int i=0;i<slen;i++)
    {
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }
    return true;
}
