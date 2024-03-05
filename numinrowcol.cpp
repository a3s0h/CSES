#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long maxi = max(x, y);
        long long value;

        if (maxi % 2 == 0) {
            // Even max
            if (maxi == x) {
                value = maxi * maxi - (y - 1);
            } else {
                value = maxi * maxi - (maxi - 1) + x;
            }
        } else {
            // Odd max
            if (maxi == y) {
                value = maxi * maxi - (x - 1);
            } else {
                value = maxi * maxi - (maxi - 1) + y;
            }
        }

        cout << value << endl;
    }
    return 0;
}
