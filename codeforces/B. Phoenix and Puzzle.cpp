

#include<bits/stdc++.h>
using namespace std;

void solve()
{
int n;
cin>>n;
if(n%4==0)
{
   int g=n/4;
   int k=sqrt(g);
   if(k*k==g)
   {
       cout<<"YES"<<endl;
       return;
   }
}
 if(n%2==0)
{
    n=n/2;

    int g=sqrt(n);

    if(g*g==n)
        cout<<"YES"<<endl;
    else
         cout<<"NO"<<endl;
}
else
     cout<<"NO"<<endl;


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



