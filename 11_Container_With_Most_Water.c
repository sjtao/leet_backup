int maxArea(int* height, int heightSize){
    
    int area = 0;
    int w, h;
    int left = 0;
    int right = heightSize-1;
    int temp;
    
    while(left < right)
    {
        w = right - left;
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
        
        temp = w * h;
        area = temp > area ? temp : area;
    }
    
    return area;
}
