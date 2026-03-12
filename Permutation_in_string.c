#include<string.h>
bool checkInclusion(char* s1, char* s2) {
    int left=0;
    int k=strlen(s1);
    int freq1[26]={0};
    int freq2[26]={0};
    for(int i=0;s1[i]!='\0';i++)
    {
        freq1[s1[i]-'a']++;
    }
    for(int right=0;s2[right]!='\0';right++)
    {
        freq2[s2[right]-'a']++;
        while(right-left+1>k)
        {
            freq2[s2[left]-'a']--;
            left++;

        }
        int match=1;
        for(int j=0;j<26;j++)
        {
           if(freq1[j]!=freq2[j])
           {
              match=0;
              break;
           }
        }
           if(match)
           {
            return true;
           }          
    }
    return false;
}
