

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
	 map<int, int>mp;
	  map<int, int>::iterator it;
	int n,k;
	cin>>n;
	for(int i=0;i<=9;i++ )
	{
		mp[i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		int k=i;
		while(k!=0)
		{
			int m=k%10;
			mp[m]++;
			k=k/10;

		}


	}
	int g=0;

       for(it=mp.begin();it!=mp.end();it++)
	 {
	 	if(g>0)
			cout<<" ";
		g++;
	 	cout<<it->second;
	 }



mp.clear();
cout<<endl;


}
int main()
{
//	freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
    	solve();
    }
}


