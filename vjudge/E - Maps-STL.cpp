
#include<bits/stdc++.h>
using namespace std;

void solve()
{
map<string,int>mp;
map<string,int>::iterator itr;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	int a;
	cin>>a;
	if(a==1)
	{
	string s;
	int b;
	cin>>s>>b;
	int flag=0;
	for(itr =mp.find(s);itr!=mp.end();itr++)
	{
		if(s==itr->first)
		{
			mp[s]=mp[s]+b;
			flag=1;

		}
	}
	if(flag==0)
		mp[s]=b;
	}
	else if(a==2)
	{
		string s;
		cin>>s;
		mp.erase(s);
	}
	else
	{
		string s;
		cin>>s;
		cout<<mp[s]<<endl;
	}

}

void solve()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		v.push_back(k);


	}
	int a,b,c;
	cin>>a>>b>>c;
	v.erase(v.begin()+(a-1));
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;
	v.erase(v.begin()+(b-1),v.begin()+(c-1));
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;



}

int main()
{
    int t;
    cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}

