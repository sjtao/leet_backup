int balancedStringSplit(char * s){
    int len = strlen(s);
    int L=0;
    int R=0;
    int substring = 0;
    int i;
    for(i = 0; i < len; i++)
    {
        if (s[i] == 'L')
            L += 1;
        else if (s[i] == 'R')
            R += 1;
        
        if(L == R)
        {
            substring ++;
            L = 0;
            R = 0;
        }
    }
    
    return substring;
}
