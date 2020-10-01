
// Sqrt(N)

vi divisors(int n) {
	vi divs;
	divs.push_back(n);
	divs.push_back(1);
	for(int i=2; i*i <= n; i++) {
		if(n%i == 0) {
			if(n/i == i) {
				divs.push_back(n/i);
			} else {
				divs.push_back(n/i);
				divs.push_back(i);
			}
		}
	}
	return divs;
}



vector<int> divisor[MAX + 1]; 

void sieve()  
{  
    for (int i = 1; i <= MAX; ++i) {  
        for (int j = i; j <= MAX; j += i)  
            divisor[j].push_back(i);  
    }
}