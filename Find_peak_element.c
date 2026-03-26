int findPeakElement(int* nums, int numsSize) {
    if(numsSize==1)
    {
        return 0;
    }
    if(nums[0]>nums[1])
    {
        return 0;
    }
    for(int i=1;i<numsSize-1;i++)
    {
        if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
        {
            return i;
        }
    }
    if(nums[numsSize-1]>nums[numsSize-2])
    {
        return numsSize-1;
    }
    return -1;
}      

OR

int findPeakElement(int* nums, int numsSize) {
    int left=0;
    int right=numsSize-1;
    while(left<right)
    {
        int mid=left+(right-left)/2;
        if(nums[mid]<nums[mid+1])
        {
            left=mid+1;
        }
        else
        {
            right=mid;
        }
    }
    return left;
}            
