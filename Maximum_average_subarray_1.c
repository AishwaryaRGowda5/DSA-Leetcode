double findMaxAverage(int* nums, int numsSize, int k) {
    double maxavg=0.00;
    double sum=0.00;
    for(int i=0;i<k;i++)
    {
       sum +=nums[i];
    }
    double avg=sum/k;
    maxavg=avg;
    for(int j=k;j<numsSize;j++)
    {
        sum=sum-nums[j-k]+nums[j];
        avg=sum/k;
        if(maxavg<avg)
        {
            maxavg=avg;
        }
    }
  return maxavg;
}                  


OR

double findMaxAverage(int* nums, int numsSize, int k) {

    double sum = 0;

    for(int i=0;i<k;i++)
        sum += nums[i];

    double maxsum = sum;

    for(int j=k;j<numsSize;j++)
    {
        sum = sum - nums[j-k] + nums[j];

        if(sum > maxsum)
            maxsum = sum;
    }

    return maxsum / k;
}
