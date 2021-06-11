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
	int n,flag=0;
	cin>>n;
	vector<int>v1;
	vector<int>v2;
	map<int,int>mp;
	for(int i=2;i<=sqrt(n);i++)
	{
 	if(n%i==0)
		{
			mp[i]++;
			mp[n/i]++;
			if(mp[i]<2)
			v1.push_back(i);
			if(mp[n/i]<2)
			v1.push_back(n/i);
		}

	}
	int res1,res2,res3,h=INT_MAX;
      for(int i=0;i<v1.size();i++)
	{
		//cout<<v1[i]<<" <-> ";
		//cout<<v2[i]<<endl;
		if(v1[i]!=2)

		{


		for(int j=2;j<=sqrt(v1[i])+10;j++)
		{
			if(v1[i]%j==0 && v1[i]/j!=n/v1[i] && j!=n/v1[i] && v1[i]/j!=j)
			{

				flag=1;
				res1=v1[i]/j;
				res2=j;
				res3=n/v1[i];

				break;

			}
			if(j==v1[i]/2+1)
				break;
		}
		}

	}

	if(flag==1)
	{


		cout<<"YES"<<endl;
		cout<<res1<<" "<<res2<<" "<<res3<<endl;
	}
	else
		cout<<"NO"<<endl;






mp.clear();

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


