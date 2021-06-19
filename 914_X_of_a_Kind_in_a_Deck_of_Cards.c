/*
Runtime: 12 ms, faster than 92.86% of C online submissions for X of a Kind in a Deck of Cards.
Memory Usage: 7.3 MB, less than 7.14% of C online submissions for X of a Kind in a Deck of Cards.
*/

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

bool hasGroupsSizeX(int* deck, int deckSize)
{
    if (deckSize == 1)
        return false;
    
    int *cnt = (int*)calloc(1000, sizeof(int));
    int i;
    for(i = 0; i < deckSize; i++)
        cnt[deck[i]]++;
    
    //find if non-zero cnts have common divisor
    int g = 0;
    for(i = 0; i < 1000; i++)
    {
        if (cnt[i] > 0)
        {
            if (g == 0) g = cnt[i];
            else g=gcd(g, cnt[i]);
        }
    }
    
    return g>=2;
}
