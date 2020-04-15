/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Base 7.
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for Base 7.
*/


char * convertToBase7(int num){
    
    if(num == 0)
    {
        return "0";
    }
    
    char convt[20];
    memset(convt, '\0', sizeof(convt));
    
    int sign = 1;
    if(num < 0)
    {
        sign = -1;
        num = -num;
    }
    
    int i = 0;
    
    while(num > 0)
    {
        convt[i] = num % 7 +'0';
        num /= 7;
        i++;
    }
    
    if(sign == -1)
    {
        convt[i] = '-';
        convt[i+1] = '\0';
    }
    else
    {
        convt[i] = '\0';
    }
    
    //reverse string
    int len = strlen(convt);
    char *rep = malloc((len+1)*sizeof(char));
    
    for(i = 0; i < len; i++)
    {
        rep[i] = convt[len-1-i];
    }
    
    rep[len] = '\0';
    
    return rep;
}

