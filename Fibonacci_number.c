

int fib(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  int arr[n+1];
  int a=0;
  int b=1;
  int temp;
  arr[0]=0;
  arr[1]=1;
  for(int i=2;i<=n;i++)
  {
    temp=a+b;
    a=b;
    b=temp;
    arr[i]=temp;
  }
  return arr[n];
}
