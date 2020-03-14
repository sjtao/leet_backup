char findTheDifference(char * s, char * t){

    int n = strlen(s);
    char temp;
    char add;
    int i, j;
    
    for (i = 0; i < n-1; i++) 
    {
      for (j = i+1; j < n; j++)
      {
         if (s[i] > s[j])
         {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
   }
    
    for (i = 0; i < n; i++) 
    {
      for (j = i+1; j < n+1; j++)
      {
         if (t[i] > t[j])
         {
            temp = t[i];
            t[i] = t[j];
            t[j] = temp;
         }
      }
   }
    
    for(i = 0; i < n; i ++)
    {
        if (s[i] != t[i])
        {
            add = t[i];
            break;
        }
    }
    if (i == n)
    {
        add = t[n];
    }
    
    return add;
}

//==========================================
char findTheDifference(char * s, char * t){

    char k = 0;
    int len = strlen(s);
    int i =0;
    for(i=0;i<len;i++)
    {
        k = k ^ s[i] ^ t[i];
    }
    k = k ^ t[i];
    return k;
}
