int maximum69Number (int num){
    int len = floor (log10 (num)) + 1;
    int *a = malloc(len*sizeof(int));
    
    int i = 0;
    int result = 0;
    
    for (i = 0; i < len; i++)
    {
        a[len -1 - i] = num % 10;
        num = num / 10;
    }
    
    for (i = 0; i < len; i++)
    {
        if (a[i] != 9)
        {
            a[i] = 9;
            break;
        }
    }
    
    for(i = 0; i < len; i++)
    {
        result = result * 10 + a[i]; 
    }
    
    return result;
}
