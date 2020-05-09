/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Backspace String Compare.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Backspace String Compare.
*/

char* reduce(char *S)
{
    int slen = strlen(S);
    
    int i=0,j=0;
    while(i < slen)
    {
        if(S[i] == '#')
        {
            i++;
            j--;
            j = j < 0 ? 0 : j;
        }
        else
        {
            S[j] = S[i];
            j++;
            i++;
        }
    }
    S[j] = '\0';
    
    return S;
}

bool backspaceCompare(char * S, char * T){
    S = reduce(S);
    T = reduce(T);
    
    int slen = strlen(S);
    int tlen = strlen(T);

    if(slen != tlen)
    {
        return 0;
    }
    
    for(int i = 0; i < slen; i++)
    {
        if(S[i] != T[i])
        {
            return 0;
        }
    }
    
    return 1;
    
}
