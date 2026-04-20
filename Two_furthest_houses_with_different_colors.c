int maxDistance(int* colors, int colorsSize) {
    int n=colorsSize;
    int ans=0;
    int dist;
    for(int i=0;i<n;i++)
    {
        if(colors[i]!=colors[n-1])
        {
           dist=n-1-i;
        }
        if(dist>ans)
        {
            ans=dist;
            break;
        }
    }   
    for(int i=n-1;i>=0;i--)
    {
        if(colors[i]!=colors[0])
        {
           dist=i;
        }
        if(dist>ans)
        {
            ans=dist;
            break;
        }
    }
    return ans;
}
