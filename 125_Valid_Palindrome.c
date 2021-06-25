/*
Runtime: 4 ms, faster than 74.73% of C online submissions for Valid Palindrome.
Memory Usage: 6.2 MB, less than 71.54% of C online submissions for Valid Palindrome.
*/

int isalphanum(char s)
{
    int ai = 0;
    if((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= '0' && s <= '9'))
        ai = 1;
    return ai;
}


bool isPalindrome(char * s){
    int len = strlen(s);
    bool same = 1;
    int i = 0, j = len-1;
    while(j > i)
    {
        int ai = isalphanum(s[i]);
        int aj = isalphanum(s[j]);
        if(ai != 0 && aj != 0 )
        {
            if(s[i]-'A' >= 0 && s[i] -'Z'<=0) s[i] = s[i] - 'A' + 'a';
            if(s[j]-'A' >= 0 && s[j] -'Z'<=0) s[j] = s[j] - 'A' + 'a';
            if(s[i] != s[j])
            {
                same = 0; break;
            }
            else
            {
                i++; j--;
            }
        }
        if (ai == 0)
        {
            i++;
        }
        if (aj == 0)
        {
            j--;
        }
    }
    return same;
}
