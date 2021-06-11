

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
	int n;
	while(cin>>n && n!=0)
	{
		vector<int>v;
		int mn=INT_MAX;
		cin.ignore();
		while(n--)
		{
			string str;
			getline(cin,str);
			int cnt=0;
			for(int i=0;i<str.size();i++)
			{
				if(str[i]==' ')
					cnt++;

			}

			v.push_back(cnt);
			mn=min(mn,cnt);


		}
		//cout<<mn<<endl;
		int sum=0;

		for(int i=0;i<v.size();i++)
		{
			int s=abs(v[i]-mn);
			sum+=s;

		}
		v.clear();
		cout<<sum<<endl;
		sum=0;

	}




}
int main()
{

 //   freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}




