
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int a;
	cin>>a;
	string str;
	cin>>str;
	int k=str.size();
	//cout<<k;
	int sum=1;
	while(a>=1)
	{
		sum=sum*a;
		a=a-k;

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






