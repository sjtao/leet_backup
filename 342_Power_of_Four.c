bool isPowerOfFour(int num){
    bool Power = 1;
    //int max = 1073741824;  //4^15: max value in (-2^31, 2^31-1)
    
    if(num <= 0)
        return 0;
    
    if(num == 1)
        return 1;
    
    while(num > 1)
    {
        if (num % 4 == 0) num = num / 4;
        else
        {
            Power = 0;
            break;
        }
    }
    
    return Power;
}
