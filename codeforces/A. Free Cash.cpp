

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,cnt=1,mx=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b,c,d;
		cin>>a>>b;
		if(i!=0)
		{
			if(a==c && b==d)
			{
				cnt++;
			}
			else
			{

				cnt=1;
			}
			mx=max(mx,cnt);

		}
		c=a;
		d=b;

	}
	cout<<mx<<endl;


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
