int missingNumber(int* nums, int numsSize) {
  int left=0;
  int right=numsSize-1;
  int present=0;
  int actual=0;
  for(int i=0;i<=right;i++)
  {
    present+=nums[i];
  }   
    actual=numsSize*(numsSize+1)/2;
  
  int missing=actual-present;
  return missing;
}
