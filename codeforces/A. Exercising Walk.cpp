/// ***********************************************T
/// O *                                           *A
/// O *    Solved By :                            *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long int l,b,c,d;
    cin>>l>>b>>c>>d;
    long int x,y,x1,x2,y1,y2;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    int sum =0,res=0,res1=0,sum1=0,lns=0,fllg =0,fllg1 =0,fllg3= 0;
    if(l > b)
    {
        res = l - b;
        sum = x - res;
        if(sum >= x1 && sum <= x2)
            fllg = 0;
        else
            fllg = 1;
    }
    else
    {
        res = b - l;
        sum = x + res;
        if(sum >= x1 && sum <= x2)
            fllg = 0;
        else
            fllg = 1;
    }

    if(c > d)
    {
        res = c - d;
        sum1 = y - res;
        if(sum1 >= y1 && sum1 <= y2)
            fllg1 = 0;
        else
            fllg1 = 1;
    }
    else
    {
        res = d - c;
        sum1 = y + res;
        if(sum1 >= y1 && sum1 <= y2)
            fllg1 = 0;
        else
            fllg1 = 1;
    }
    if(x1 == x2 && l > 0 || x1 == x2 && b > 0 )
         fllg3 = 1;
    else if(y1 == y2 && c > 0 || y1 == y2 && d > 0)
         fllg3 = 1;
    else if(y1 == y2 && y1 == x1 && y1 == x2 && l > 0 ||y1 == y2 && y1 == x1 && y1 == x2 && b > 0 ||y1 == y2 && y1 == x1 && y1 == x2 && c > 0 || y1 == y2 && y1 == x1 && y1 == x2 && d > 0 )
         fllg3 = 1;

    if(fllg1 == 0 && fllg == 0 && fllg3 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}
