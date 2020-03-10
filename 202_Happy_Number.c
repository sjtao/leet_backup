
int sum(int a){
    int sqsum = 0;
    int x = a;
    int temp;
    while (x != 0)
    {
        temp = x % 10;
        sqsum += temp * temp;
        x = x / 10;
    }
    return sqsum;
}

bool isHappy(int n){
    
    bool result;
    
    if (n == 0)
        return false;
    if (n == 1)
        return true;
    
    int a = n;
    int b = n;
    
    do{
        a = sum(a);
        b = sum(sum(b));
    } while(a != b);
        
    if (a == 1)
        result = true;
    else
        result = false;

    return result;
}
