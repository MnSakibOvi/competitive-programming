
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
    	int n,m;
    	cin>>n>>m;
    	double g=m*1.00;
    	int f=ceil(n/g),mx=INT_MIN;
    	int arr[++n];
    	for(int i=0;i<n;i++)
	{


		cin>>arr[i];
		if(mx>arr[i])
			mx=arr[i];
	}
	int top=0,sum=0;
	int mn=INT_MAX;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(i>f-1)
		{
			sum-=arr[top];
			top++;
			mn=min(mn,sum);

		}

	}




       cout<<"Case "<<k<<":"<<max(mx,mn)<<endl;


    }
    return 0;
}



