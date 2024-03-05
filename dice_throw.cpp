#include<bits/stdc++.h>
using namespace std;

const long long int mod = 1e9 + 7;
long long int dp[1000100];

void solve(int sum)
{
    for(long long int i = 0; i <= sum; i++)
    {
        if(i == 0)
            dp[i] = 1;
        else
        {
            dp[i] = 0;
            for(long long int j = 1; j <= 6 && j <= i; j++)
            {
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }
    cout << dp[sum] << endl;
}

int main()
{
    int n;
    cin >> n;

    solve(n);

    return 0;
}
