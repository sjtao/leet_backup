/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Number Complement.
Memory Usage: 5.3 MB, less than 100.00% of C online submissions for Number Complement.
*/

int findComplement(int num){
    
    if(num == 0)
    {
        return 1;
    }
    
    int binary[32]={0};
    int i = 0;
    
    while(num > 0)
    {
        binary[i] = ((num % 2)^1); //0 XOR 1 = 1, 1 XOR 1 = 0
        num /= 2;
        i++;
    }
    
    int complement = 0;
    for(int j = i-1; j >= 0; j--)
    {
        complement = complement * 2 + binary[j];
    }
    
    return complement;
}
