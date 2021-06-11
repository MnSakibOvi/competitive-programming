

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
int t;
cin>>t;
while(t--)
{
	int sum=0;
	int a,b;
	cin>>a>>b;

		for(int i=a;i<=b;i++)
		{
			sum+=arr[i];
		}

	cout<<sum<<endl;

}
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


