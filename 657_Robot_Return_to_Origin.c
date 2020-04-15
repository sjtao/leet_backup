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
