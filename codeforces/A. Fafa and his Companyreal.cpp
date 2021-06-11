#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n,cnt=0;
cin>>n;
for(int i=1;i<n;i++)
{
    if(n%i==0)
        cnt++;
}
cout<<cnt;


}
int main()
{

    solve();
}


