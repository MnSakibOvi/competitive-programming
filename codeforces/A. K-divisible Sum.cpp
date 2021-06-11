


#include<bits/stdc++.h>
using namespace std;
void solve()
{
long double n,m;
cin>>n>>m;
int res;
if(n>m)
{
    int s=ceil(n/m);
    m=m*s;

}
res=ceil(m/n);

cout<<"->"<<res<<endl;


}
int main()
{
    int t;
    cin>>t;
   //t=1;
    while(t--)
    {
    	solve();
    }
}


