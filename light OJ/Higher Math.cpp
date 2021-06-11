
#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int t;
    cin>>t;
    for(int v=1; v<=t; v++)
    {
    	int arr[3];
    	for(int i=0;i<3;i++)
		cin>>arr[i];
	sort(arr,arr+3);
		cout<<"Case "<<v<<": ";
	if((arr[0]*arr[0])+(arr[1]*arr[1])==(arr[2]*arr[2]))
	{
		cout<<"yes"<<endl;
	}
	else
		cout<<"no"<<endl;




       // cout<<f<<" "<<s<<endl;
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

