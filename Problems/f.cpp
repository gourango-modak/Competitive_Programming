#include<bits/stdc++.h>
using namespace std;

bool isValid(long long n, int d) {
    while(n > 0) {
        if(n%10 == d) return false;
        n/=10;
    }
    return true;
}

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out2.txt", "w", stdout);

    int t;
    cin >> t;
    while(t--) {
        long long n, d, res = 0;
        cin >> n >> d;
        for(int i = 0; i <= n; i++) {
            if(isValid(i+n, d)) {
                res = i;
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}