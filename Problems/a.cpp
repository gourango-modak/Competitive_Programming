#include<bits/stdc++.h>
using namespace std;

long long correctNum(long long num1, long long &res, int d) {
    long long num2 = num1, pos = 0;
    while(num1 > 0) {
        int digit = num1%10;
        int pos10 = pow(10, pos)+0.5;

        if(pos == 0 && digit == d) res += 1, num2++;
        else if(digit == d) res += (pos10-(num2%pos10)), num2 += (pos10-(num2%pos10));
        pos++;
        num1/=10;
        if(num2/(pos10*10) != num1) num1 = num2/(pos10*10);
    }
    return num2;
}

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--) {
        long long n, d, res = 0, num1 = 0, num2 = 0, pos = 0;
        cin >> n >> d; num1 = num2 = n;
        while(num1 > 0) {
            num2 = correctNum(num2, res, d);
            num1/=10;
        }
        cout << res << "\n";
    }
    return 0;
}