int titleToNumber(char * s){
    int len = strlen(s);
    
    int i;
    int col = 0;
    for(i = 0; i < len; i++)
    {
        col += (s[i] - 'A' + 1) * pow(26, len-1-i);
    }
    
    return col;
}
