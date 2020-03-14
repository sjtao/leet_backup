bool checkPerfectNumber(int num){

    int sum = 1;
    
    int i;
    int div;
    
    if (num <= 3)
    {
        return 0;
    }
    
    for (i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            div = num / i;
            if (div > i)
            {
                sum += i + div;
            }
            else if (div == i)
            {
                sum += i;
            }
            else
                break;
        }
    } 
    
    return (sum == num);
}

// better performance
bool checkPerfectNumber(int num){

    int sum = 1;
    
    int i;
    int div;
    
    if (num <= 3)
    {
        return 0;
    }
    
   for(i = 1; i *i <= num; i++)
   {
       if (num % i == 0)
       {
           sum += i + num / i;
       }
   }
   
    sum = sum / 2;
    
    return (sum == num);
}
