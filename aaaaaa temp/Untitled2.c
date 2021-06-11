#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,cnt=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
		map<int,int>mp;
		vector<int>v;
	for(int i=0;i<n;i++
	{
		int c=arr[i];
		mp[c]++;//map a duhkalam
	if(mp[c]==1)
	{
		v.push_back(c);

	}
	}
	for(int j=0;j<v.size();j++)
	{
		int c=v[i];
		cout<<mp[c]<<endl;
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


/////
