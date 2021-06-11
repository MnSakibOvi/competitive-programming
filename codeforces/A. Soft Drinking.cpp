
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int s1=(k*l)/nl;
    int s2=c*d;
    int s3=p/np;

    int r=min(s1,s2);
    int z=min(r,s3);

    int res=z/n;
    cout<<res<<endl;



}
