

void printDivisors(int n) 
{
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        {
            if (n/i == i) 
                printf("%d ", i);
            else
                printf("%d %d ", i, n/i); 
        } 
    } 
} 