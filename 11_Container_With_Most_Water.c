int maxArea(int* height, int heightSize){
    
    int area = 0;
    int w, h;
    int left = 0;
    int right = heightSize-1;
    int temp;
/*    
    while(left < right)
    {
       w = right - left;
        /*
        if(height[left] < height[right])
        {
            h = height[left];
            left++; 
        }
        else
        {
            h = height[right];
            right--;
        }
        */
        h = height[right] < height[left] ? height[right--] : height[left++];
        
        temp = w * h;
        area = temp > area ? temp : area;
    }
  */
    while(left < right)
    {
        temp = (right - left) * (height[right] < height[left] ? height[right--] : height[left++]);
        area = temp > area ? temp : area;
    }
    return area;
}
