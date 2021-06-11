

#include<bits/stdc++.h>
using namespace std;
void solve()
{

long long int a,b,x=1;

cin>>a>>b>>x;



if(x==1)
    cout<<"1"<<endl;
else if(x==a*b)
    cout<<x<<endl;
else
{

long long int mod=x%a;
long long int vag=(x/a);

if(x%a!=0)
    vag++;
else
mod=a;
mod--;
long long int res=(b*mod)+vag;
//cout<<vag<<" "<<mod<<endl;
cout<<res<<endl;



}

}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}
