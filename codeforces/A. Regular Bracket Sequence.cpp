
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string str;
	cin>>str;
	if(str.size()%2==1)
	{
		cout<<"NO"<<endl;
		return ;
	}

	else
	{
		int fb=0,sb=0,qu=0,flag=0;
		if(str[str.size()-1]=='(')
		{
			flag=1;
		}
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='(')
					fb++;
			else if(str[i]==')')
				sb++;
			else
				qu++;
				if(fb+qu<sb)
				{
					flag=1;
					break;
				}
		}
		if(flag==1)
			cout<<"NO"<<endl;
		if(flag==0)

			cout<<"YES"<<endl;

		//cout<<fb<<"->"<<sb<<"-> "<<qu<<endl;
	}




}
int main()
{
    int t;
 cin>>t;
//    t=1;
    while(t--)
    {
    	solve();
    }
}
