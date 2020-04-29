/*
Runtime: 48 ms, faster than 15.38% of C online submissions for Construct the Rectangle.
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for Construct the Rectangle.
*/

int* constructRectangle(int area, int* returnSize){
    
    int *rectangle = calloc(2, sizeof(int));
    
    rectangle[0] = (int) ceil(sqrt(area));
    
    while(area % rectangle[0] != 0)
    {
        rectangle[0]++;
    }
    
    rectangle[1] = area / rectangle[0];
    
    *returnSize = 2;
    return rectangle;
}

/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Construct the Rectangle.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Construct the Rectangle.
*/
int* constructRectangle(int area, int* returnSize){
    
    int *rectangle = calloc(2, sizeof(int));
    
    int x = sqrt(area);
    
    while(area % x != 0)
    {
        x--;
    }
    
    rectangle[0] = area / x;
    rectangle[1] = x;
    
    *returnSize = 2;
    return rectangle;
}
