

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
	while(cin>>n)
	{
		vector<int>v;
		int arr[n],flag=0,flag2=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(i != 0)
			{
				int k=abs(arr[i]-arr[i-1]);
				v.push_back(k);

			}

		}


 sort(v.begin(), v.end());
 int c=1;
if(n==1)
flag2=0;

for(int i=0;i<v.size();i++)
{
	//cout<<v[i]<<" -";
	if(v[i]!=c)
	{
		flag2=1;
		break;
	}
	c++;



}
		if(flag2==0)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;

	}




}
int main()
{

   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}





