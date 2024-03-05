/*
Consider an n * n grid whose squares may have traps. It is not allowed to move to a 
square with a trap.
Your task is to calculate the number of paths from the upper-left square to the 
lower-right square. You can only move right or down.
Input
The first input line has an integer n: the size of the grid.
After this, there are n lines that describe the grid. Each line has n characters: 
"."denotes an empty cell, and * denotes a trap.
Output
Print the number of paths modulo 10^9+7.
Constraints

1 \le n \le 1000

Example
Input:
4
....
.*..
...*
*...

Output:
3

*/


#include<bits/stdc++.h>
using namespace std;

const long long int mod = 1e9 +7;

void solve(int n ,vector<vector<char>> &nums)
{

    if(nums[0][0] == '*'){cout<<"0"<<endl;return;}

    vector<vector<long long int>> dp(n,vector<long long int> (n,0));

    dp[0][0] = 1;
    for(long long int i =0;i<n;i++)
    {
        for(long long int j=0;j<n;j++)
        {
            if(i==0 && j==0)dp[i][j] = 1;
            else if(nums[i][j] == '.')
            {
                // cout<<"here";
                if(i) dp[i][j] += dp[i-1][j];
                if(j) dp[i][j] += dp[i][j-1];
            }

            dp[i][j] %= mod;
            
        }
    }
    cout<<dp[n-1][n-1]<<endl;

}

int main()
{
    int n ;
    cin>>n;
    vector<vector<char>> nums(n);
    
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            char ch;
            cin>>ch;
            nums[i].push_back(ch);
        }
    }

    solve(n,nums);
    return 0;
}