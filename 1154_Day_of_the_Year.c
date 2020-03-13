bool leapyear(int year)
{
    bool y;
    if(year % 100 == 0)
    {
        year = year / 100;
        if (year % 4 == 0)
        {
            y = 1;
        }
        else
        {
            y = 0;
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            y = 1;
        }
        else
        {
            y = 0;
        }
    }
    return y;
}

int dayOfYear(char * date){

    int mon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    char year[5];
    char month[3];
    char days[3];
    
    for(int i=0; i < 4; i++)
    {
        year[i] = date[i];
    }
    year[4] ='\0';
    
    for(int i = 0; i < 2; i++)
    {
        month[i] = date[5+i];
    }
    month[2]='\0';
    
    for(int i = 0; i < 2; i++)
    {
        days[i] = date[8+i];
    }
    days[2]='\0';
    
    int y = atoi(year);
    int m = atoi(month);
    int d = atoi(days);
    
    for (int i = 0; i < m; i++)
    {
        d += mon[i];
    }
    
    if (leapyear(y) == 1 && m > 2) d = d + 1; //leap year
    
    return d;
    
}

