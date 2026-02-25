int maxProfit(int* prices, int pricesSize) {
  int min=prices[0];
  int maxprofit=0;
  for(int i=1;i<pricesSize;i++)
  {
    if(prices[i]<min)
    {
        min=prices[i];
    }
    else
    {
       int max=prices[i]-min;
       if(max>maxprofit)
       {
        maxprofit=max;
       }
    }
  }
  return maxprofit;
}
