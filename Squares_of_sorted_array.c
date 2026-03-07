int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    
    int* result = (int*)malloc(numsSize * sizeof(int));

    for(int i = 0; i < numsSize; i++)
    {
        result[i] = nums[i] * nums[i];
    }

    qsort(result, numsSize, sizeof(int), compare);

    *returnSize = numsSize;
    return result;
} 

OR


int* sortedSquares(int* nums, int numsSize, int* returnSize) {
   int* result=(int*)malloc(numsSize*sizeof(int));
    int left=0;
    int right=numsSize-1;
    int k=numsSize-1;
    while(left<=right)
    {
        int leftsq=nums[left]*nums[left];
        int rightsq=nums[right]*nums[right];
        if(leftsq>rightsq)
        {
            result[k]=leftsq;
            left++;
        }
        else
        {
            result[k]=rightsq;
            right--;
        }
        k--;
    }
   *returnSize=numsSize;
   return result;
}
