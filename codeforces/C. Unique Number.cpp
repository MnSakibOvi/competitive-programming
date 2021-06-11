

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
	int n,k=9,h=10,flag=0;
   vector<int>v;
	cin>>n;
	while(n!=0)
	{
		if(n>k)
		{
			v.push_back(k);
			n=n-k;
		}
		else if(n<=k)
		{


			v.push_back(n);
			n=0;
		}
		k--;
		if(k<1 && n!=0)
		{
			flag=1;
			break;
		}


	}
	  reverse(v.begin(), v.end());
	  if(flag==0)
	  {


	  for(int i=0;i<v.size();i++)
	  {
	  	cout<<v[i];
	  }
	  }
	  else
		cout<<"-1"<<endl;
	  cout<<endl;






}
int main()
{
    int t;
    cin>>t;
   // t=1;
    while(t--)
    {
    	solve();
    }
}





