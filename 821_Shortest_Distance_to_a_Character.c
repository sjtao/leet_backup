/*
Runtime: 8 ms, faster than 66.04% of C online submissions for Shortest Distance to a Character.
Memory Usage: 6.2 MB, less than 100.00% of C online submissions for Shortest Distance to a Character.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char * S, char C, int* returnSize){
    int len = strlen(S);
    int *distance = malloc(len * sizeof(int));
    int *eloc = malloc(len * sizeof(int));
    
    int nume = 0;
    int i;
    for(i = 0; i < len; i++)
    {
        if(S[i] == C)
        {
            eloc[nume++] = i;
        }
    }
    

    for(i = 0; i < len; i++)
    {
        if( i <= eloc[0])
        {
            distance[i] = eloc[0] - i;
        }
        else if(i >= eloc[nume-1])
        {
            distance[i] = i - eloc[nume-1];
        }
        else
        {
            int index = 0;
            while (index < nume-1)
            {
                if(i > eloc[index] && i <= eloc[index+1])
                {
                    int mid = eloc[index] + (eloc[index+1] - eloc[index])/2;
                    if(i <= mid)
                    {
                        distance[i] = i - eloc[index];
                    }
                    else
                    {
                        distance[i] = eloc[index+1] - i;
                    }
                    break;
                }
                else
                    index ++;
            }
                
        }
    }
    
    *returnSize = len;
    return distance;
}

/*
Runtime: 4 ms, faster than 100.00% of C online submissions for Shortest Distance to a Character.
Memory Usage: 6 MB, less than 100.00% of C online submissions for Shortest Distance to a Character.
*/
int* shortestToChar(char * S, char C, int* returnSize){
    
    int len = strlen(S);
    int *distance = malloc(len * sizeof(int));
    
    int i;
    
    distance[0] = (S[0] == C) ? 0 : len;
    for(i = 1; i < len; i++)
    {
        distance[i] = (S[i] == C) ? 0 : distance[i-1]+1;
    }
    
    for(i = len-2; i >= 0; i--)
    {
        if(distance[i] > distance[i+1]+1) 
            distance[i] = distance[i+1]+1;
    }
    
    *returnSize = len;
    return distance;
}
