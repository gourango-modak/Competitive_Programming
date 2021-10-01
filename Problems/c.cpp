#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long counter = 0;
    int t;
    cin >> t;
    while(t--) {
	    cin >> n;
	    counter = 0;
	    for(int i = 0; i <=n; i++) {
	    	bool flag = false;
	    	string num = to_string(i);
	    	for(int j = 0; j < num.length(); j++) {
	    		if(num[j] < '0' || num[j] > '2') {
	    			flag = true;
	    			break;
	    		}
	    	}
	    	if(!flag) {
	    		counter++;
	    	}
	    }
	    cout << counter << "\n";
	}
    
    return 0;
}