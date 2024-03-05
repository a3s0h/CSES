#include<bits/stdc++.h>
using namespace std;

// Define a memoization table
vector<vector<int>> memo;

int solve(int ind, int n, int prev, vector<int> &nums)
{
    // Base condition
    if(ind == n) return 0;

    // Check if the result for the current state is already computed
    if(memo[ind][prev + 1] != -1)
        return memo[ind][prev + 1];

    int sum = 0;

    if(prev == -1 || (prev != -1 && prev < nums[ind]))
    {
        // cout << "here for " << nums[ind] << " with prev : " << prev << endl;
        sum = max(nums[ind] + solve(ind+1, n, nums[ind], nums), solve(ind+1, n, prev, nums));
    }
    else
    {
        sum = 0 + solve(ind+1, n, prev, nums);
    }

    // Store the result in the memoization table
    memo[ind][prev + 1] = sum;

    return sum;
}

int main()
{
    int n;
    cin >> n;

    // Initialize the memoization table with -1
    memo.assign(n, vector<int>(n, -1));

    vector<int> nums;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int res = solve(0, n, -1, nums);
    cout << res << endl;
    return 0;
}
