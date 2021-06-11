

/// *********************************************** T
/// O *                                           * A
/// O *    Solved By : mn_sakib_ovi(DIU)          * S
/// v *      Be Positive,be Happy.                * I
/// I *                                           * N
/// *********************************************** N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,sum=0,m=0,p=0,z=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<0)
			m++;
		else if(arr[i]>0)
			p++;
		else
			z++;
	}
	int x=min(m,p);

	int h=abs(m-p);
	int r=(h,r);
	int l=(x+r)*2;
	for(int i=0;i<n;i++)
	{
		int c;
		if(arr[i]<=0)
		{
			c=abs(arr[i])+1;
		}
		else
			c=arr[i]-1;
			//cout<<c<<" ";
		sum=sum+c;

	}
	sum=sum-l ;
	cout<<sum<<endl;




}
int main()
{
    int t;
    //cin>>t;
t=1;
    while(t--)
    {
    	solve();
    }
}


