/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Add Binary.
Memory Usage: 5.4 MB, less than 100.00% of C online submissions for Add Binary.
*/

char * addBinary(char * a, char * b){
    int lena = strlen(a);
    int lenb = strlen(b);
    int len = lena >= lenb ? lena : lenb;
    char* result = (char*)calloc(len+2,sizeof(char));
    
    int i = lena-1;
    int j = lenb-1;
    int carry = 0;
    int l = 0;
    char temp;
    
    while(i >= 0 || j >= 0)
    {
        carry += ((i >= 0)? a[i] - '0': 0); 
        carry += ((j >= 0)? b[j] - '0': 0);
        
        result[l++] = carry % 2 + '0';
        carry /= 2;
        
        i--;
        j--;
    }
    
    if (carry != 0) result[l++] = carry + '0';
    
    result[l] = '\0';
    
    //swap
    for(i = 0; i < l/2; i++)
    {
        temp = result[i];
        result[i] = result[l-1-i];
        result[l-1-i] = temp;
    }
    
    return result;
}
