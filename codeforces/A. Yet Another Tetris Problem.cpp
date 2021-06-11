#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n,x,cnt1=0,cnt2=0;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    cin>>x;
    v.push_back(x);
    if(x%2==0)
        cnt2++;
    else
        cnt1++;
}
//cout<<cnt2<<cnt1<<endl;
if(cnt1==0 || cnt2==0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

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

