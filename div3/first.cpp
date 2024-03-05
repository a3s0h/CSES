#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        string res = "";
        int prev = 0;
        int i = 1;
        while(i<26 && 52+i < x)
        {
            i++;
        }
        prev = i;
        if(i>26){cout<<"";break;}

        res = res + static_cast<char>(65 + i-1);

        // 2nd 
        i = 1;
        while(i<26 && 26+i+prev < x)
        {
            i++;
        }
        if(i>26 ){cout<<" ";break;}
        prev += i;
        res = res + static_cast<char>(65 + i-1);

        //3rd 
        res = res + static_cast<char>(65 + x-prev-1);
        
        std::transform(res.begin(), res.end(), res.begin(), ::tolower);
        cout<<res<<endl;
    }
    return 0;
}

/*

78

52

26

*/