/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Length of Last Word.
Memory Usage: 5.4 MB, less than 100.00% of C online submissions for Length of Last Word.
*/

int lengthOfLastWord(char * s){
    
    int len = strlen(s);
    
    if(len==0)
    {
        return 0;
    }
    
    int i;
    int count = 0;
    bool w = 0; //hit letters
    for(i = len-1; i >= 0; i--)
    {
        if(s[i] == ' ')
        {
            if(w == 1)
                break;
        }
        else
        {
            w = 1;
            count++;
        }
    }
    
    return count;
}
