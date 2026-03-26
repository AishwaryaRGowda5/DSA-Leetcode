int findMin(int* nums, int numsSize) {
    int min=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]<min)
        {
            min=nums[i];
        }
    }
    return min;
}

OR

int findMin(int* nums, int numsSize) {
    int left=0;
    int right=numsSize-1;
    while(left<right)
    {
        if(nums[left]<nums[right])
        {
            return nums[left];
        }
        int mid=left+(right-left)/2;
        if(nums[mid]>nums[right])
        {
            left=mid+1;
        }
        else
        {
            right=mid;
        }
    }
    return nums[left];
} 
