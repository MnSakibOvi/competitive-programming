


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
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int arr2[m];
	for(int i=0;i<m;i++)
		cin>>arr2[i];
		map<char,int>mp;
		long long int sum=0;
	for(int j=0;j<m;j++)
	{
		long long int mx=INT_MIN,s;
		char c;
		for(int i=0;i<n;i++)
		{
			///cout<<arr[i][j];
			c=arr[i][j];
			mp[c]++;
			if(mp[c]>mx)
			mx=mp[c];

		}
		s=arr2[j]*mx;
		mp.clear();
		sum+=s;

	}
	cout<<sum<<endl;

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




