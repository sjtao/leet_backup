

bool isPalindrome(int x){
    
    bool result = false;
       
    if (x >= 10)
    {
        int len = floor (log10 (abs (x))) + 1;
        int *ax = malloc(len*sizeof(int));
        int i, m;
        for (i = 0; i < len; i++)
        {
            ax[i] = x % 10;
            x = x / 10;
        }
        if (len % 2 == 0)
        {
            m = len / 2;
        }
        else
        {
            m = (len - 1)/2;
        }
        
        for (i = 0; i < m; i++)
        {
            if (ax[i] != ax[len-1-i])
            {
                result = false;
                break;
            }
            else
            {
                result = true;
            }
        }  
    }
    else if (x >= 0 && x < 10)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    
    return result;

}

