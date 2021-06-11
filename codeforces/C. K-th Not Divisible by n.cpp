#include<bits/stdc++.h>
using namespace std;
void solve()
{
 int n,k,sum=0,s,mod;
    cin>>n>>k;
    int cln=k;
   while(k>=n)
    {
         s=k/n;
        sum=sum+s;
        mod=k%n;
        k=s+mod;

    }
    cout<<sum+cln<<endl;
}


int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}

