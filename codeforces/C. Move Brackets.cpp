

#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;

string str;
cin>>str;
int f=0,s=0,cnt=0;
for(int i=0;i<n;i++)
{
    if(str[i]=='(')
        f++;
    else
        s++;

    if(s>f)
    {
        cnt++;
        s--;
    }
}
cout<<cnt<<endl;

}
int main()
{
    int t;
    cin>>t;
 //  t=1;
    while(t--)
    {
    	solve();
    }
}

