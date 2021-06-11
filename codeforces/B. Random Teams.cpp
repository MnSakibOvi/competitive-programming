#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,mx,mn;
    cin>>n>>m;

    long long  int t=n-(m-1);
    long long  int tf=t-1;
    mx=(tf*(tf+1))/2;
    // cout<<mx<<endl;
    long long  int div=n/m;
    long long   int mod=n%m;
    long long  int cnt=m-mod;
    long long int tf1=(div-1);
    long long  int mnf1=(tf1*(tf1+1))/2;

    long long  int mn1=mnf1*cnt;
    long long   int mnf2=(div*(div+1))/2;
    long long   int mn2=mnf2*mod;
    mn=mn1+mn2;
    cout<<mn<<" "<<mx<<endl;


    return 0;
}
