#include <bits/stdc++.h>
using namespace std;

long long int dp[1000100];


set<int> getDigits(int num)
{
    int temp = num;
    set<int> st;
    while(temp> 0)
    {
        st.insert(temp%10);
        temp/=10;
    }
    return st;
}

void solve(int n)
{
    // vector<vector<long long int >> dp(len + 1, vector<long long int >(n + 1, 0));


    for (int i = 1; i <= n; i++)
    {
        if(i==0)dp[i] = 1;
        else{
            dp[i] = 1e9;
            for(auto it : getDigits(i))
            {
                if(it <= i)dp[i] = min(dp[i] ,1 + dp[i-it]);
            }

        }
    }

    cout << dp[n] << endl;
}

int main()
{
    int n;
    cin >> n;
    
    solve(n);
    return 0;
}