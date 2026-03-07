int maxArea(int* height, int heightSize) {
    int maxh=0;
    int left=0;
    int right=heightSize-1;
    int h;
    while(left<right)
    {
        int temp1=left;
        int temp2=right;
        if(height[left]<height[right])
        {
           h=height[left];
           left++; 
        }
        else
        {
            h=height[right];
            right--;
        }
        int max=h*(temp2-temp1);
        if(maxh<max)
        {
            maxh=max;
        }
    }
    return maxh;
}      

OR

int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;
    int maxArea = 0;

    while (left < right) {
        int h = height[left] < height[right] ? height[left] : height[right];
        int area = h * (right - left);

        if (area > maxArea)
            maxArea = area;

        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return maxArea;
}
