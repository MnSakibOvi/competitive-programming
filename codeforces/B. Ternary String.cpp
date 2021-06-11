
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
	string str;
	cin>>str;
	char a,b,c;
     int mn=INT_MAX,flag=0,f=0,s,ss;

	for(int i=1;i<str.size();i++)
	{
		if(str[i]!=str[i-1] && f==0)
		{
			a=str[i];
			b=str[i-1];
			//cout<<a<<b<<"<>";
			s=i-1;
			f=1;
		}
		if(f==1 && str[i]==a &&str[i-1]==b || str[i]==b &&str[i-1]==a)
		{
			a=str[i];
			b=str[i-1];
			//cout<<a<<b<<"<>";
			s=i-1;


		}
		if(f==1 && str[i]!=a && str[i] !=b )
		{
			if(i-s<mn)
			{
				mn=i-s;
				ss=s;

			}
			//cout<<"mn"<<mn;
			//cout<<"ans="<<s<<i<<endl;
			a=str[i-1];
			b=str[i];
			s=i-1;

			flag=1;
		}




	}

	if(flag==1)
	{


		cout<<mn+1<<endl;

      }
	else
		cout<<"0"<<endl;






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





