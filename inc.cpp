#include <bits/stdc++.h>
using namespace std;

long long int findMinMoves(vector<long long int> &arr) {
    long long int cnt = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            cnt += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long int cnt = 0;
    cnt = findMinMoves(arr);

    cout << cnt << endl;
    return 0;
}
