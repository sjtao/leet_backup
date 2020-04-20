/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Maximum Number of Balloons.
Memory Usage: 5.4 MB, less than 100.00% of C online submissions for Maximum Number of Balloons.
*/


int maxNumberOfBalloons(char * text){

    int len = strlen(text);
    int * count = calloc(5, sizeof(int));
    
    int i;
    for(i = 0; i < len; i++)
    {
        if(text[i] == 'b') count[0]++;
        else if(text[i] == 'a') count[1]++;
        else if(text[i] == 'n') count[2]++;
        else if(text[i] == 'l') count[3]++;
        else if(text[i] == 'o') count[4]++;
    }
    
    for(i = 0; i < 3; i++)
    {
        if(count[i] < 1)
        {
            return 0;
        }
    }
    for(i = 3; i < 5; i++)
    {
        if(count[i] < 2)
        {
            return 0;
        }
    }
    
    int min1, min2, min21;
    min1 = (count[0] < count[1]) ? count[0] : count[1];
    min1 = (min1 < count[2]) ? min1 : count[2];
    
    min2 = (count[3] < count[4]) ? count[3] : count[4];
    min21 = min2/2;
    
    return (min1 < min21) ? min1 : min21;
}



/*
Runtime: 4 ms, faster than 40.35% of C online submissions for Maximum Number of Balloons.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Maximum Number of Balloons.
*/
int maxNumberOfBalloons(char * text){

    int len = strlen(text);
    int * count = calloc(5, sizeof(int));
    
    int i;
    for(i = 0; i < len; i++)
    {
        if(text[i] == 'b') count[0]++;
        else if(text[i] == 'a') count[1]++;
        else if(text[i] == 'n') count[2]++;
        else if(text[i] == 'l') count[3]++;
        else if(text[i] == 'o') count[4]++;
    }
    
    int min1, min2, min21;
    min1 = (count[0] < count[1]) ? count[0] : count[1];
    min1 = (min1 < count[2]) ? min1 : count[2];
    
    min2 = (count[3] < count[4]) ? count[3] : count[4];
    
    if (min1 < 1 || min2 < 2)
    {
        return 0;
    }
        
    min21 = min2/2;
    
    return (min1 < min21) ? min1 : min21;
}
