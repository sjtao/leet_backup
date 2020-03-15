

int minCostToMoveChips(int* chips, int chipsSize){
    
    int min_step = 0;
    int odd = 0;
    int even = 0;
    
    for (int i = 0; i < chipsSize; i++)
    {
        if(chips[i] % 2 == 0)
        {
            even += 1;
        }
        else
            odd += 1;
    }
    
    if (odd > even)
        min_step = even;
    else
        min_step = odd;
    
    return min_step;
}

