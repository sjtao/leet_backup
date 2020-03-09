int* diStringMatch(char * S, int* returnSize){
    int N = strlen(S);
    
    *returnSize = N+1;
    int *result = malloc((N+1)*sizeof(int));
    
    int s = 0;
    int d = N;
    int i;
    
    for (i = 0; i <N; i++)
    {
        if (S[i] == 'I')
        {
            result[i] = s;
            s = s + 1;
        }
        else if (S[i] == 'D')
        {
            result[i] = d;
            d = d - 1;
        }
    }
    
    result[N] = d;
    
    return result;
}
