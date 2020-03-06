

int reverse(int x){

    int upper = 2147483647; //pow(2, 31) - 1;
    int lower = -2147483648; //-pow(2, 31);
    
    int rx = 0;
    int r;
 
    while(x!=0)
    {
        r = x % 10;
        x = x / 10;
        rx = rx * 10 + r;
        if((rx > upper/10 && x != 0) || (rx < lower/10 && x != 0))
        {
            rx = 0;
            break;
        }
    }
    
    return rx;
    
}

