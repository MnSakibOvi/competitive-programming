

/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;

int main()
{
	 //  freopen("input.txt", "r", stdin);
   //  freopen("output.txt", "w", stdout);
  string str;
  int t=1;
  while(cin>>str)
  {
  	cout<<"Case "<<t<<":"<<endl;
  	t++;
  	int n;
  	cin>>n;
  	while(n--)
	{
		int a,b,flag=0;
		cin>>a>>b;
		int mn=min(a,b);
		int mx=max(a,b);

		for(int i=mn;i<mx;i++)
		{
			if(str[i]== '0' && str[i+1]=='1'  || str[i]== '1' &&str[i+1]=='0' )
			{
				cout<<"No"<<endl;
				flag=1;
				break;
				//cout<<str[i];
			}
		}
		if(flag==0)
			cout<<"Yes"<<endl;

	}

  }
}
