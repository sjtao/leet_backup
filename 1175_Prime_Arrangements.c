int countPrimes(int n){
    if((n-1) < 2) return 0;
    n = n+1; //count primes no greater than n

    bool *isPrime = malloc(n*sizeof(bool));
    memset(isPrime, true, n);
    int primeCount = 1;
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

long int numPrimeArrangements(int n){
    if(n <= 2)
        return 1;
    
    int num = countPrimes(n);
    int bound = 1e9 + 7;
    long int arg = 1;
    
    int i;
    for (i = 2; i <= num; i++)
    {
        arg = arg * i % bound;
    }
    for (i = 2; i <= n-num; i++)
    {
        arg = arg * i % bound;
    }
    
    
    return arg;

}

