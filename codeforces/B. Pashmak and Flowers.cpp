#include<bits/stdc++.h>
using namespace std;

void solve();
//long long int recursion(long long int);
long long int res;
long long int recursion(long long int a)
{
    if(a==1)
        return 1;
    else
       return a+recursion(a-1);
        //cout<<"YES"<<endl;
}

int main()
{
    solve();
    return 0;
}


void solve()
{

    long long int n,x,mn=INT_MAX,mx=INT_MIN,mnc=0,mxc=0;
    cin>>n;
    vector<long long int>v;
    for(long long int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
        if(x<mn)
            mn=x;
        if(x>mx)
            mx=x;
    }
    cout<<mx-mn<<" ";
    for(long long int i=0; i<n; i++)
    {
        if(v[i]==mn)
            mnc++;
        if(v[i]==mx)
            mxc++;
    }
    if(mx==mn)
    {

        res= recursion(mxc-1);

    }
    else
        res=mxc*mnc;

    if(n==2)
        cout<<"1"<<endl;
    else
        cout<<res<<endl;

}
