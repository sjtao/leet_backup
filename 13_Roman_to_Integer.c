int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 

int romanToInt(char * s){
    
    int len = strlen(s);
    int i;
    int result = 0;
    int s1, s2;
    
    for (i = 0; i < len; i++)
    {
        s1 = value(s[i]);
        if (i+1 < len)
        {
            s2 = value(s[i+1]);
            if (s1 < s2)
            {
                result -= s1;
            }
            else
            {
                result += s1;
            }
        }
        else
        {
            result += s1;
        }
    }
    
    return result;

}

