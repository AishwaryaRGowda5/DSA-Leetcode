char* longestPalindrome(char* s) {
     int n=strlen(s);
     if(n==0) return "";
     int start=0,maxlen=1;
     for(int i=0;i<n;i++)
     {
        int left=i,right=i;
        while(left>=0 && right<n && s[left]==s[right])
        {
            if(right-left+1>maxlen)
            {
                start=left;
                maxlen=right-left+1;
            }
            left--;
            right++;
        }
        
        left=i;
        right=i+1;
         while(left>=0 && right<n && s[left]==s[right])
        {
            if(right-left+1>maxlen)
            {
                start=left;
                maxlen=right-left+1;
            }
            left--;
            right++;
        }       
     }
     char*result=(char*)malloc((maxlen+1)*sizeof(char));
     strncpy(result,s+start,maxlen);
     result[maxlen]='\0';
     return result;
}
