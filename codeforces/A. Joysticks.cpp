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
	int n,k,mn,mx;
	cin>>n>>k;
	int s,cnt=0;
	mn=min(n,k);
	mx=max(n,k);
	if(n==k && k==1)
	{


		cout<<"0"<<endl;
		return ;
	}
	else
	{


	while(true)
	{
		if(mx==2 && mn==1)
			{
				cnt++;
				break;
			}
		if(mx%2==0 && mx!=2)
		     s=mx-2;
		else
			s=mx-1;
		mx=mx-s;
		s=s/2;
		mn=mn+s;
		cnt=cnt+s;
		int l=min(mx,mn);
		int k=max(mx,mn);
		mx=k;
		mn=l;
		if(mx==0 && mn==0)
			break;
			else if(mx==2 && mn==1)
			{
				cnt++;
				break;
			}
			//cout<<mx<<" "<<mn<<endl;
	}
	}
	cout<<cnt<<endl;





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





