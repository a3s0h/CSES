#include<bits/stdc++.h>
using namespace std;

int findNumber(vector<int> &arr,int n)
{
    sort(arr.begin(),arr.end());
    // cout<<"sorted array "<<endl;
    // for(auto it : arr)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    int i =1,j = n;
    int mid = i+(j-i)/2;
    while(i<j)
    {
        if(mid != arr[mid-1] && arr[mid-2] == mid-1)
        {
            return mid;
        }
        else if (mid == arr[mid-1])
        {
            i = mid+1;
        }
        else{
            j = mid;
        }
        mid = i+(j-i)/2;

    }
    return i;
}

int main()
{
    int n ;
    cin >> n;
    vector<int> arr(n-1);
    for(int i =0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    // cout<<"2"<<endl;
    int missingNumber = findNumber(arr,n);
    cout<<missingNumber<<endl;
    return 0;
}