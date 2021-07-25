
#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
    int g=n+1,sum=0,sum2=0;
    while(n!=0)
    {
        int m=n%10;
        sum+=m;
        n=n/10;

    }
       while(g!=0)
    {
        int m=g%10;
        sum2+=m;
        g=g/10;

    }
    if(sum>sum2)
        return 1;
    else
        return 0;
}
void solve()
{
int n;
cin>>n;
int g=n/10;
if(n%10==9)
    g++;
cout<<g<<endl;

}
int main()
{
    int t;
   cin>>t;
 // t=1;
    while(t--)
    {
    	solve();
    }
}



