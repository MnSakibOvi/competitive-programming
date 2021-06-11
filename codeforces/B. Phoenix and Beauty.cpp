

/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	map<int,int>mp;
      int arr[n];
      vector<int>v;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
		if(mp[arr[i]]<=1)
		{
			v.push_back(arr[i]);

		}

	}

	if(n==k)
	{

	      cout<<n<<endl;
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	}
	else if(k<v.size())
	{
		cout<<"-1"<<endl;
	}
	else
	{
		int cnt=0;
		cout<<v.size()*2<<endl;
		for(int i=0;i<v.size();i++)
		{
			cnt++;
			cout<<v[i]<<" ";
			if(cnt==v.size()*2)
				break;
			if(i==v.size()-1)
				i=-1;


		}


	  	cout<<endl;
	}





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





