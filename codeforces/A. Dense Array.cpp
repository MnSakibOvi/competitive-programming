
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int cnt=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]*2>arr[i+1] || arr[i+1]*2>arr[i])
		{
			int a=max(arr[i],arr[i+1]);
			int b=min(arr[i],arr[i+1]);
			while(b*2<a)
			{
				b=b*2;
				cnt++;
			}

		}

	}
	cout<<cnt<<endl;


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
