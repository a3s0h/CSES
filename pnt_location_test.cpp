#include<bits/stdc++.h>
using namespace std;

struct point{
    int x ,y;
   void read()
   {
        cin>>x>>y;
   }

    point operator-(point &p1)const {
        return point{x-p1.x , y - p1.y};
    }
    void operator -= (point &p)
    {
        x -= p.x;
        y -= p.y;
    }

    long long operator *(point p)
    {
        return x*p.y  - y*p.x;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        point p1,p2,p3;
        p1.read();
        p2.read();
        p3.read();

        p3 -= p1;
        p2 = p2-p1;

        // cross product
        long long int res = p2 * p3;

        if(res< 0)cout<<"RIGHT"<<endl;
        else if (res > 0)cout<<"LEFT"<<endl;
        else cout<<"TOUCH" << endl;
 
    }
    return 0;
}