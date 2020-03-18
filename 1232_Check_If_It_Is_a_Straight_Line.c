

bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize){

    //straight line: y = kx + b; use the first two points to get a formula, test if the rest points meet
    
    if(coordinatesSize == 2)
        return 1; 
    
    bool straight = true;
    double slope, intcp;
    int i;
    if(coordinates[1][0] != coordinates[0][0])
    {
        slope = (coordinates[1][1] - coordinates[i][1])/(coordinates[1][0] - coordinates[0][0]);
        intcp = coordinates[0][1] - slope * coordinates[0][0];
        
        for(i = 2; i < coordinatesSize; i++)
        {
            if (coordinates[i][1] != slope * coordinates[i][0] + intcp)
            {
                straight = false;
                break;
            }
        }
    }
    else
    {
        //vertical line from first two points, the rests must have same x value to stay in this straight line
        for(i = 2; i < coordinatesSize; i++)
        {
            if (coordinates[i][0] != coordinates[0][0])
            {
                straight = false;
                break;
            }
        }
    }
    
    return straight;
    
}

