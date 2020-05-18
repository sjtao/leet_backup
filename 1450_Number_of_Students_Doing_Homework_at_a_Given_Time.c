/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Number of Students Doing Homework at a Given Time.
Memory Usage: 5.7 MB, less than 100.00% of C online submissions for Number of Students Doing Homework at a Given Time.
*/

int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime){
    
    int count = 0;
    for(int i = 0; i < startTimeSize; i++)
    {
        if(queryTime >= startTime[i] && queryTime <= endTime[i])
            count++;
    }
    return count;
}
