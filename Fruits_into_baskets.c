#include<stdlib.h>
int totalFruit(int* fruits, int fruitsSize) {
    int *freq=calloc(fruitsSize+1,sizeof(int));
    int left=0;
    int maxLen=0;
    int types=0;
    for(int right=0;right<fruitsSize;right++)
    {
        if(freq[fruits[right]]==0)
        {
            types++;
        }
        freq[fruits[right]]++;
        while(types>2)
        {
            freq[fruits[left]]--;
            if(freq[fruits[left]]==0)
            {
                types--;
            }
            left++;
        }     
        if(right-left+1>maxLen)
        {
            maxLen=right-left+1;
        }       
    }
    return maxLen;
}
