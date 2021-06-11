
#include<bits/stdc++.h>
using namespace std;

void solve()
{
int n;
cin>>n;
//string arr[n*2];
cin.ignore();
map<string,string>mp;
for(int i=0;i<n;i++)
{
	string str,str1;
	getline(cin,str);
	getline(cin,str1);
	mp[str]=str1;
}
//for(int i=0;i<n*2;i++)
//{
//	cout<<arr[i];
//}
int m;
cin>>m;
cin.ignore();
while(m--)
{
	string s;
	getline(cin,s);
	cout<<mp[s]<<endl;
}


}
int main()
{
    int t;
  //  cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}
