int numJewelsInStones(char * J, char * S){
    
    int count = 0;
    
    int lenJ = strlen(J);
    int lenS = strlen(S);
    
    int i, j;
    
    for (i = 0; i < lenJ; i++)
    {
        for(j = 0; j < lenS; j++)
        {
            if(J[i] == S[j])
                count += 1;
        }
    }
    
    return count;
}
