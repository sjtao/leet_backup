/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Is Subsequence.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Is Subsequence.
*/

bool isSubsequence(char * s, char * t){
    int lens = strlen(s);
    int lent = strlen(t);
    
    if(lens > lent)
    {
        return 0;
    }
    
    int i = 0, j = 0;
    while(i< lens && j < lent)
    {
        if(s[i] == t[j])
        {
            i++;
        }
        
        j++;
    }
    
    return (i==lens);
}
