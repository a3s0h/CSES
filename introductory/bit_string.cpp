#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

int power(int x, int y) {
    int res = 1;

    for(int i =1;i<=y;i++)
    {

        res = res * 2 %mod;
    }

   
    return res;
}

int countBitStrings(int n) {
    return power(2, n);
}

signed main() {
    int n;
    cin >> n;

    int result = countBitStrings(n);
    cout << result << endl;

    return 0;
}
