#include<bits/stdc++.h>
using namespace std;

int noOfDigit(long long n) {
	int len = 0;
	while(n > 0) {
		n /= 10;
		len++;
	}
	return len;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
    	long long n, tores = 3;
    	cin >> n;
    	if(n == 1) {
    		cout << 3 << "\n";
    		return 0;
    	}
    	long long len = noOfDigit(n), res = 0, res3 = 0;
    	if(len > 2) res = 2;
    	for(int j = 2; j < len; j++) {
    		if(len > 2) res = 2;
    		else res = 0;
	    	for(int i = j; i < len; i++) {
	    		res *= 3;
	    	}
	    	tores += res;
	    }
    	// cout << tores << "\n";
    	string num = to_string(n);
    	long long res2 = 0;

    	if(num[0] == '2') {
    		res2 += (pow(3, num.length()-1));
    		res3 = 0;
    		for(int i = 1; i < num.length(); i++) {
	    		if(num[i] == '2')  res3 += 2*(pow(3, num.length()-1-i));
	    		else if(num[i] == '1') res3 += (pow(3, num.length()-1-i));
	    		else if(num[i] > '2') {
	    			res3 += 3*(pow(3, num.length()-1-i));
	    			break;
	    		}
	    	}
	    	res2 += res3;
    	}
    	if(num[0] == '1') {
    		res3 = 0;
    		for(int i = 1; i < num.length(); i++) {
	    		if(num[i] == '2')  res3 += 2*(pow(3, num.length()-1-i));
	    		else if(num[i] == '1') res3 += (pow(3, num.length()-1-i));
	    		else if(num[i] > '2') {
	    			res3 += 3*(pow(3, num.length()-1-i));
	    			break;
	    		}
	    	}
	    	res2 += res3;
	    }
    	else if(num[0] > '2') res2 = 2*3*(pow(3, num.length()-2));
    	bool flag = true;
    	for(int i = 0; i < num.length(); i++) {
    		if(num[i] < '0' || num[i] > '2') {
    			flag = false;
    			break;
    		}
    	}
    	if (flag) res2++;

    	cout << tores+res2 << "\n";
    }
    return 0;
}