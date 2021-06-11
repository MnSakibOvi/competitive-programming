#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b,c,cnt=0;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
    }
    else
    {
        long long int x=min(a,b);
        long long  int y=min(b,c);
        long long int z=min(c,a);

        if(max(x,y)==a || max(y,z)==a || max(z,x)==a)
            cnt++;
        if(max(x,y)==b || max(y,z)==b || max(z,x)==b)
            cnt++;
        if(max(x,y)==c || max(y,z)==c || max(z,x)==c)
            cnt++;
        if(cnt==3)
            cout<<"YES"<<endl<<x<<" "<<y<<" "<<z<<endl;
        else
            cout<<"NO"<<endl;

    }

}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


