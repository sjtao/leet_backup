

int largestAltitude(int* gain, int gainSize){
    
    int i, max = 0, altd = 0;
    for(i = 0; i < gainSize; i++)
    {
        altd = altd + gain[i];
        max = max > altd ? max :altd;
    }
    return max;

}
