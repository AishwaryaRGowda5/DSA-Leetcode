int removeDuplicates(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        int freq=0;
        for(int j=0;j<count;j++)
        {
            if(nums[j]==nums[i])
            {
                freq++;
            }
        }
        if(freq<2)
        {
            nums[count]=nums[i];
            count++;
        }
    }
    return count;
}

OR

int removeDuplicates(int* nums, int numsSize) {
   if(numsSize<=2) 
   {
    return numsSize;
   }
   int k=2;
   for(int i=2;i<numsSize;i++)
   {
    if(nums[i]!=nums[k-2])
    {
        nums[k]=nums[i];
        k++;
    }
   }
   return k;
}
