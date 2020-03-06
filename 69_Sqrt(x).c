

int mySqrt(int x){

    int s = x;
    int y = 1;
    
    while(y < s)
    {
        if (s > 1000000)
            s = s/2;
        else
            s = (s+y)/2;
        y = x/s;
    }
    
    return s;
}

