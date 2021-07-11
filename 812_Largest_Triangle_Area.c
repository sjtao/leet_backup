/*
Runtime: 8 ms, faster than 28.57% of C online submissions for Largest Triangle Area.
Memory Usage: 6 MB, less than 42.86% of C online submissions for Largest Triangle Area.
*/


double largestTriangleArea(int** points, int pointsSize, int* pointsColSize){
    int i, j, k;
    double area = 0;
    double a, b, c, s, temp;
    double x1, x2, x3, y1, y2, y3;
    for(i = 0; i < pointsSize - 2; i++)
    {
        for(j = i+1; j < pointsSize - 1; j++)
        {
            for(k = j+1; k < pointsSize; k++)
            {
                x1 = points[i][0]; y1 = points[i][1];
                x2 = points[j][0]; y2 = points[j][1];
                x3 = points[k][0]; y3 = points[k][1];
                a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
                b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
                c = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
                s=(a + b + c)/2;
                temp =sqrt(s*(s-a)*(s-b)*(s-c));
                if (area < temp) area = temp;
            }
        }
    }
    return area;
}

/*
Runtime: 4 ms, faster than 100.00% of C online submissions for Largest Triangle Area.
Memory Usage: 5.9 MB, less than 57.14% of C online submissions for Largest Triangle Area.
*/


double largestTriangleArea(int** points, int pointsSize, int* pointsColSize){
    int i, j, k;
    double area = 0;
    double a, b, c, s, temp;
    double x1, x2, x3, y1, y2, y3;
    for(i = 0; i < pointsSize - 2; i++)
    {
        x1 = points[i][0]; y1 = points[i][1];
        for(j = i+1; j < pointsSize - 1; j++)
        {
            x2 = points[j][0]; y2 = points[j][1];
            for(k = j+1; k < pointsSize; k++)
            {
                x3 = points[k][0]; y3 = points[k][1];
                a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
                b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
                c = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
                s=(a + b + c)/2;
                temp =sqrt(s*(s-a)*(s-b)*(s-c));
                if (area < temp) area = temp;
            }
        }
    }
    return area;
}
