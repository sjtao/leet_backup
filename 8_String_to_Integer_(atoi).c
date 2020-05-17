/*
Runtime: 4 ms, faster than 48.37% of C online submissions for String to Integer (atoi).
Memory Usage: 5.4 MB, less than 100.00% of C online submissions for String to Integer (atoi).
*/

#define INT_MAX  2147483647
#define INT_MIN -2147483648

int myAtoi(char * str){
    
    long int number = 0;
    int len = strlen(str);
    int i;
    bool gap = 0;
    int sign = 1;
    int n;
    for(i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            if(gap == 1)
            {
                break;
            }
        }
        else if(str[i] == '-')
        {
            if(gap == 1)
            {
                break;
            }
            else
            {
                sign = -1;
                gap = 1;
            }
        }
        else if(str[i] == '+')
        {
            if(gap == 1)
            {
                break;
            }
            else
            {
                sign = 1;
                gap = 1;
            }
        }
        else
        {
            n = str[i] - '0';
            gap = 1;
            if(n >= 0 && n <= 9)
            {
                number = number * 10 + n;
                if(number >= INT_MAX && sign == 1)
                {
                     return INT_MAX;
                }

                if(number > INT_MAX && sign == -1)
                {
                    return INT_MIN;
                }
            }
            else
            {
                break;
            }
        }
    }
    
    number *= sign;
    
    return number;
}
