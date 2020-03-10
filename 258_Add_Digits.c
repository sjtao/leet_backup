
int addDigits(int num){
//result: 1~9 for non-zeros inputs
    int result;
    
    if (num == 0)
        return 0;
    
    if (num % 9 == 0)
    {
        result = 9;
    }
    else
    {
        result = num % 9;
    }

    return result;
}
