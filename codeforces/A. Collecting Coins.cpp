#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int s=max(a,b);
    int d=max(s,c);
    //cout<<d<<endl;
    int sum=(d-a)+(d-b)+(d-c);
    if(sum>n)
    {
        cout<<"NO"<<endl;
    }
    else if(sum==n)

    {
        cout<<"YES"<<endl;
    }
    else
    {
        int mod=n-sum;
        if(mod%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


