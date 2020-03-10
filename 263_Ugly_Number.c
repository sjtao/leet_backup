bool isUgly(int num){

    int a = num;
     
    while (a % 2 == 0 && a > 0)
    {
        a = a / 2;
    }
    while (a % 3 == 0 && a > 0)
    {
        a = a / 3;
    }
    while (a % 5 == 0 && a > 0)
    {
        a = a / 5;
    }
    
    
    return (a==1);
}

