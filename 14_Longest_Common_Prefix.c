/*
Runtime: 4 ms, faster than 48.52% of C online submissions for Longest Common Prefix.
Memory Usage: 5.5 MB, less than 100.00% of C online submissions for Longest Common Prefix.
*/

char * longestCommonPrefix(char ** strs, int strsSize){

    if(strsSize == 0)
    {
        return "";
    }
    
    int i,j;
    bool s = 1;

    char *prefix = strs[0];
    
    for(j = 1; j < strsSize; j++)
    {
        for(i = 0; prefix[i] != '\0' && strs[j][i] != '\0'; i++)
        {
            if(strs[j][i] != prefix[i])
            {
                s = 0;
                prefix[i] = '\0';
            }
        }
        if(s) prefix[i] = '\0';
    }
  
    return prefix;
}
