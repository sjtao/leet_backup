bool isPrime(int n){
    
    bool pm = true;
    int i;
    
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            pm = false;
            break;
        }
    }
    return pm;
}

int countPrimes(int n){

    if (n <= 2)
        return 0;
    
    int count = 1; // n=2
    int i;
    for (i = 3; i < n; i = i+2)
    {
        count = count + isPrime(i);
    }
    
    return count; 
}

//faster
int countPrimes(int n){
    if((n-1) < 2) return 0;

    bool *isPrime = malloc(n*sizeof(bool));
    memset(isPrime, true, n);
    int primeCount = 1 ;
    for(int i = 3; i < n; i = i+2) {
        if(isPrime[i]) {
            primeCount++;
            for(int j = i; j < n; j = j+i) {
                isPrime[j] = false;
            }
        } 
    }
    return primeCount;
}
