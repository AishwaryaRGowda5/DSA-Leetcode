int characterReplacement(char* s, int k) {
    int map[26]={0};
    int left=0;
    int maxLen=0;
    int maxFreq=0;
    for(int right=0;s[right]!='\0';right++)
    {
        map[s[right]-'A']++;
        if(map[s[right]-'A']>maxFreq)
        {
            maxFreq=map[s[right]-'A'];
        }
        while((right-left+1)-maxFreq>k)
        {
            map[s[left]-'A']--;
            left++;
        }
        int len=right-left+1;
        if(maxLen<len)
        {
            maxLen=len;
        }
  }
  return maxLen;
}
