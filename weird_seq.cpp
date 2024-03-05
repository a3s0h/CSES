#include<iostream>
#include<vector>
using namespace std;


// odd -> *3 +1
// even -> /2
int main()
{
    long long int n ;
    cin>>n;
    vector<long long> arr;
    while(n!=1)
    {
        arr.push_back(n);
        if(n%2 == 0)
        {
            n = n/2;
        }
        else{
            n = n*3 + 1;
        }
    }
    arr.push_back(1);
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    return 0;
}