
#include<bits/stdc++.h>
using namespace std;

void solve()
{
string str;
cin>>str;
map<char,int>mp;
vector<char>c;
for(int i=0;i<str.size();i++)
{
    mp[str[i]]++;
    if(mp[str[i]]==1)
        c.push_back(str[i]);
}
int cnt=0,cn=0;
for(int i=0;i<c.size();i++)
{
char cc=c[i];
if(mp[cc]>1)
    cnt++;
else
    cn++;

}
cout<<cnt+(cn/2)<<endl;

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



