/*
Runtime: 4 ms, faster than 98.71% of C online submissions for Minimum Time Visiting All Points.
Memory Usage: 6.1 MB, less than 100.00% of C online submissions for Minimum Time Visiting All Points.
*/

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    
    if(pointsSize < 2)
    {
        return 0;
    }
    
    int i;
    int step = 0;
    int temp1, temp2;
    
    for(i = 0; i < pointsSize - 1; i++)
    {
       
        temp1 = abs(points[i+1][0] - points[i][0]);
        temp2 = abs(points[i+1][1] - points[i][1]);
        step += (temp1 > temp2 ? temp1 : temp2);

    }
    
    return step;
}

