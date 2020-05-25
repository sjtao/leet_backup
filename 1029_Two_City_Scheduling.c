/*
Runtime: 4 ms, faster than 70.00% of C online submissions for Two City Scheduling.
Memory Usage: 5.8 MB, less than 100.00% of C online submissions for Two City Scheduling.
*/

int twoCitySchedCost(int** costs, int costsSize, int* costsColSize){

    int min = 0;
    int *diff = malloc(costsSize * sizeof(int));
    
    int i, j;
    int temp1, temp2;
    for (i = 0; i < costsSize; i++)
    {
       for(j = i+1; j < costsSize; j++)
       {
           if(costs[i][0]-costs[i][1] > costs[j][0]-costs[j][1])
           {
               temp1 = costs[i][0]; temp2 = costs[i][1];
               costs[i][0] = costs[j][0]; costs[i][1] = costs[j][1];
               costs[j][0] = temp1; costs[j][1] = temp2; 
           }
       }
    }
    
    int n =  costsSize/2;
    for(i = 0; i < n; i++)
    {
        min += (costs[i][0] + costs[n+i][1]);
    }
    
    return min;
}
