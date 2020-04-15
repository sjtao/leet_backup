/*
Runtime: 4 ms, faster than 93.21% of C online submissions for Robot Return to Origin.
Memory Usage: 5.7 MB, less than 100.00% of C online submissions for Robot Return to Origin.
*/

bool judgeCircle(char * moves){
    bool origin = true;
    
    int len = strlen(moves);
    
    int numR = 0;
    int numL = 0;
    int numU = 0;
    int numD = 0;
    
    for(int i = 0; i < len; i++)
    {
        if(moves[i] == 'R') numR ++;
        else if(moves[i] == 'L') numL ++;
        else if(moves[i] == 'U') numU ++;
        else if(moves[i] == 'D') numD ++;
    }
    
    if(numR != numL || numU != numD)
    {
        origin = false;
    }
    
    return origin;
    
}

bool judgeCircle(char * moves){
    
    int len = strlen(moves);
    
    int H = 0;
    int V = 0;
    
    for(int i = 0; i < len; i++) //same performance
    {
        if(moves[i] == 'R') H ++;
        else if(moves[i] == 'L') H --;
        else if(moves[i] == 'U') V ++;
        else if(moves[i] == 'D') V --;
    }
    
    return (H==0 && V==0);
    
}
