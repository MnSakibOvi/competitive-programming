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
	int n,k,x,o,s,sum=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>x;

		if(i!=0)
		{

		s=o+x;
		if(s<k)
		{
			x=x+(k-s);
			sum=sum+(k-s);
		}

		}
		o=x;
		arr[i]=x;

	}
	cout<<sum<<endl;
	for(int u=0;u<n;u++)
	{
		cout<<arr[u]<<" ";
	}
	cout<<endl;




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

