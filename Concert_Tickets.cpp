#include<bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1e9+7;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;

    vector<int> mvt, cst;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mvt.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        cst.push_back(x);
    }

    sort(mvt.begin(), mvt.end());

    // vector<bool> used(n, false);  // Vector to mark elements as use
    vector<int> res;
    for (int i = 0; i < m; i++) {
        auto idx = lower_bound(mvt.begin(), mvt.end(), cst[i]);

        if(idx != mvt.end())
        {
            res.push_back(*(idx-1));
            nums[nums[*(idx-1)]]=-1;
        }
        else if(mvt[i] != -1){

            res.push_back(-1);
        }

    }

    for (auto it : res)
        cout << it << endl;

    return 0;
}
