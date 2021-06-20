/*
Runtime: 8 ms, faster than 25.81% of C online submissions for Rectangle Area.
Memory Usage: 5.8 MB, less than 51.61% of C online submissions for Rectangle Area.
*/

int overlap(int ax1, int ax2, int bx1, int bx2)
{
    int oab;
    if (ax2 <= bx1 || bx2 <= ax1) oab = 0;
    else 
    {
        if (bx1 <= ax1 && ax2 <= bx2) oab = ax2 - ax1;
        if (ax1 <= bx1 && bx2 <= ax2) oab = bx2 - bx1;
        if (bx1 <= ax1 && bx2 <= ax2) oab = bx2 - ax1;
        if (ax1 <= bx1 && ax2 <= bx2) oab = ax2 - bx1;
    }
    return oab;
}

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){

    int areaA = (ax2 - ax1) * (ay2 - ay1);
    int areaB = (bx2 - bx1) * (by2 - by1);
    
    int ox = overlap(ax1, ax2, bx1, bx2);
    int oy = overlap(ay1, ay2, by1, by2);
    int areaO = ox * oy;//overlap

    return areaA + areaB - areaO;
}


/*
Runtime: 16 ms, faster than 25.81% of C online submissions for Rectangle Area.
Memory Usage: 5.8 MB, less than 51.61% of C online submissions for Rectangle Area.
*/
int max(int a,int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a <= b)
        return a;
    else
        return b;
}

int overlap(int ax1, int ax2, int bx1, int bx2)
{
    int oab;
    if (ax2 <= bx1 || bx2 <= ax1) 
        oab = 0;
    else 
        oab = min(ax2, bx2) - max(ax1, bx1);

    return oab;
}

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){

    int areaA = (ax2 - ax1) * (ay2 - ay1);
    int areaB = (bx2 - bx1) * (by2 - by1);
    
    int ox = overlap(ax1, ax2, bx1, bx2);
    int oy = overlap(ay1, ay2, by1, by2);
    int areaO = ox * oy;

    return areaA + areaB - areaO;

}
