
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int a,b,c;
	cin>>a;
if(a==0)
	cout<<1<<endl;
else if(a<0)
{
	int sum=0;
	for(int i=(1);i>=a;i--)
	{
		sum=sum+i;
		//cout<<sum<<" ";
	}
	cout<<sum<<endl;
}
else
{
	int sum=0;
	for(int i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	cout<<sum<<endl;

}




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



