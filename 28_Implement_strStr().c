/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Implement strStr().
Memory Usage: 5.7 MB, less than 100.00% of C online submissions for Implement strStr().
*/

int strStr(char * haystack, char * needle){
    
    int lenhah = strlen(haystack);
    int lenned = strlen(needle);
    
    if(lenhah < lenned)
    {
        return -1;
    }
    
    if(lenned == 0)
    {
        return 0;
    }
    
    int i, j;
    for(i = 0; i <= lenhah-lenned; i++)
    {
        for(j = 0; j < lenned; j++)
        {
            if(haystack[i+j]!=needle[j])
            {
                break;
            }
        }
        
        if(j == lenned) return i;
    }
    
    return -1;
}
