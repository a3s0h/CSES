#include<bits/stdc++.h>
using namespace std ;
 

#define int long long 

vector<int> v(18,0);
void calc(vector<int> &v)
{
    for(int i =1;i<=17;i++)
    {
        v[i]=(9*i*pow(10,i-1));
    }
}


void solve(int n )
{
    int sum =0 ;
    int len_index = 0;

    for(int i =0 ;i<=17;i++)
    {
        sum += v[i];
        if(sum <= n)
        {
            len_index = i + 1;
        }
        else{
            break;
        }
    }   

    sum -= v[len_index];
    int diff = n - sum;
    int starting_number = pow(10,len_index - 1);
    int distance_from_starting_number = (diff/len_index);
    int actual_number = starting_number + distance_from_starting_number - 1;
    int rem = diff % len_index;

    if(rem == 0)
    {
        cout<<actual_number%10<<endl;
    }
    else{
        actual_number++;
        rem = len_index - rem;
        while(rem--)
        {
            actual_number /= 10;
        }
        cout<<actual_number%10<<endl;
    }

}


signed main()
{
    calc(v);
    int n ;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        solve(t);
    }
    // for(auto it : v)
    //     cout<<it<<" ";

    // solve(n);
    return 0;
}