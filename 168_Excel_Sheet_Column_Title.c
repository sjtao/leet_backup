/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Excel Sheet Column Title.
Memory Usage: 5.5 MB, less than 91.53% of C online submissions for Excel Sheet Column Title.
*/

char * convertToTitle(int columnNumber){
    //convert to 26 based
    //log(2^31-1)/log(26) = 6.59
    
    char *arr = (char*)malloc(10 * sizeof(char));
    char *title = (char*)malloc(10 * sizeof(char));
    int i = 0, j;
    while(columnNumber>0)
    {
        columnNumber --;
        arr[i] = (char)(columnNumber%26+'A');
        columnNumber /= 26;
        i++;
    }
    arr[i] = '\0';
    title[i] = '\0';
    for(j = i-1; j>=0; j--)
    {
        title[j] = arr[i-1-j];
    }
    
    return title;

}
