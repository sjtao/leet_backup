/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Day of the Week.
Memory Usage: 5.3 MB, less than 100.00% of C online submissions for Day of the Week.
*/

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

char * dayOfTheWeek(int day, int month, int year){
    //1971-1-1: Friday
    char *days[8] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int dayspermonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int dayscnt = -4;
    for(int i = 1971; i < year; i++)
    {
        dayscnt += (365 + leapyear(i))%7;
    }
    
    for(int i = 1; i < month; i++)
    {
        dayscnt += dayspermonth[i];
    }
    
    if(month > 2)
    {
        dayscnt += leapyear(year);
    }
    
    dayscnt += day;
    
    dayscnt %= 7;
    
    return days[dayscnt];

}

