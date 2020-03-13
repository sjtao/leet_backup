bool judgeSquareSum(int c){
    
    bool ss = false;
    
    int a, b, max;
    double ca;
    int intca;
    max = (int) sqrt(c);

    if(max > 46340)
    {
        return ss;
    }
    
    for(a = max; a >= 0; a--)
    {
        ca = sqrt(c-a*a);
        intca = (int) ca;
        
        if (intca == ca)
        {
            ss = true;
            break;
        }
 
    }
    
    return ss;
}
