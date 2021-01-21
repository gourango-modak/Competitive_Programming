
void sieve() 
{
    bool prime[MAX+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=MAX; p++) {
        if (prime[p] == true) {
            for (int i=p*p; i<=MAX; i += p) 
                prime[i] = false; 
        } 
    }
    for (int p=2; p<=MAX; p++) 
        if (prime[p]) 
            cout << p << " ";
}


// Segment Sieve

void sieveRange(int low, int high)
{
    int limit = floor(sqrt(high)) + 1;
    vector<int> prime;
    sieve(limit, prime); // simple sieve to generate all primes up to limits
 
    int n = high - low + 1;
 
    bool mark[n + 1];
    memset(mark, false, sizeof(mark));
 
    for (int i = 0; i < prime.size(); i++) 
    {
        int loLim = floor(low / prime[i]) * prime[i];
        if (loLim < low)
            loLim += prime[i];
        if(loLim==prime[i])
            loLim += prime[i];

        for (int j = loLim; j <= high; j += prime[i])
            if(j != prime[i])
              mark[j - low] = true;
    }
 
    for (int i = low; i <= high; i++)
        if (!mark[i - low])
            cout << i << "  ";
}