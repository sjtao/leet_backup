bool isRectangleOverlap(int* rec1, int rec1Size, int* rec2, int rec2Size){

    bool overlap = true;
    
    if(rec2[0] >= rec1[2] || rec2[2] <= rec1[0] || rec2[3] <= rec1[1] || rec2[1] >= rec1[3])
    {
        overlap = false;
    }
    
    return overlap;
    
}
