

#include<bits/stdc++.h>
using namespace std;

void solve()
{

int n;
cin>>n;
string str,s;
cin>>str;
s=str;
sort(str.begin(), str.end());
int k=0;
for(int i=0;i<str.size();i++)
{
    if(str[i]!=s[i])
        k++;
}
cout<<k<<endl;

}
int main()
{
    int t;
    cin>>t;
// t=1;
    while(t--)
    {
        solve();
    }
}
