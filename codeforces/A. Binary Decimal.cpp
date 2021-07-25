

#include<bits/stdc++.h>
using namespace std;
void solve()
{

int n,mx=INT_MIN;
cin>>n;
while(n!=0)
{
    int g=n%10;
    mx=max(g,mx);
    n=n/10;
}
cout<<mx<<endl;
}
int main()
{
    int t;
    cin>>t;
 //  t=1;
    while(t--)
    {
    	solve();
    }
}



