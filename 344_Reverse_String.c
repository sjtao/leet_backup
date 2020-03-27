void reverseString(char* s, int sSize){
    /* slower
    int en = sSize - 1;
    char temp;
    for(int i = 0; i < sSize/2; i++)
    {
        temp = s[i];
        s[i] = s[en-i];
        s[en-i] = temp;
    }
    */
    //faster
    int low = 0;
    int high = sSize - 1;
    char tmp;
    while (low < high) {
        tmp = s[low];
        s[low] = s[high];
        s[high] = tmp;
        low++;
        high--;
    }
    
    return;
}
