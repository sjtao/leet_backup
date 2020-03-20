//A boomerang is a set of 3 points that are all distinct and not in a straight line.
/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Valid Boomerang.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Valid Boomerang.
*/

bool isBoomerang(int** points, int pointsSize, int* pointsColSize){
    
    bool distinct = false;
    
    double a_sq = (points[0][0] - points[1][0])*(points[0][0] - points[1][0]) + (points[0][1] - points[1][1])*(points[0][1] - points[1][1]);
    double b_sq = (points[2][0] - points[1][0])*(points[2][0] - points[1][0]) + (points[2][1] - points[1][1])*(points[2][1] - points[1][1]);
    double c_sq = (points[2][0] - points[0][0])*(points[2][0] - points[0][0]) + (points[2][1] - points[0][1])*(points[2][1] - points[0][1]);
    
    if (a_sq != 0 && b_sq != 0 && c_sq != 0)
    {
        distinct = true;
    }
    
    if(distinct)
    {
        double cos = (a_sq + b_sq - c_sq) / (2 * sqrt(a_sq * b_sq));
        
        if(cos == 1 || cos == -1)
        {
            distinct = false;
        }
    }
    
    return distinct;

}
