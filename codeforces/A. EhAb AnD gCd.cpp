#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
if(n==2  || n%2==1)
{
    int s=n-1;
    int p=n-s;
     cout<<p<<" "<<s<<endl;
}
else
{
    int s=n-2;
    int p=n-s;
     cout<<p<<" "<<s<<endl;
}
}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}

