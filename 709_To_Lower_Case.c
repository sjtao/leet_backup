/*
All the upper case characters (A-Z) have ASCII value ranging from 65 to 90,
and their corresponding lower case characters (a-z) have ASCII value 32 greater than them.
=========================================================
Runtime: 0 ms, faster than 100.00% of C online submissions for To Lower Case.
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for To Lower Case.
*/
char * toLowerCase(char * str){
    
    int len = strlen(str);
    
    for(int i = 0; i < len; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
    
    return str;
}
