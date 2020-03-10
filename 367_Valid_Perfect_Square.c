bool isPerfectSquare(int num){
    bool result = true;
    
    int k = 1;
    
    while (k*k < num)
    {
        k = k + 1;
        if (k >= 46341) //46341^2-(2^31-1)=4634 overflow
        {
            k = k -1;
            break;
        }
    }
    
    if (k*k == num) result = true;
    else result = false;
    
    return result;
}
