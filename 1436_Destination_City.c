/*
Runtime: 8 ms, faster than 100.00% of C online submissions for Destination City.
Memory Usage: 6.4 MB, less than 100.00% of C online submissions for Destination City.
*/

char * destCity(char *** paths, int pathsSize, int* pathsColSize){

    int *des = calloc(pathsSize, sizeof(int));
    char a, b;
    int i = 0, j = 0;
    for(i = 0; i < pathsSize; i++)
    {
        for(j = 0; j < pathsSize; j++)
        {
            if(strcmp(paths[i][1],paths[j][0]) == 0)
            {
                des[i] = 1;
                break;
            }
        }
    }
    
   for(i = 0; i < pathsSize; i++)
   {
       if(des[i] == 0)
       {
           return paths[i][1];
       }
   }
    
    return;
}
