
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
    	int arr[n];
    	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<m;j++)
	{
		char c;
		cin>>c;
		if(c=='S')
		{
			int s;
			cin>>s;
			for(int l=0;l<n;l++)
			{
				arr[l]=arr[l]+s;
			}
		}
		else if(c=='M')
		{
		      int s;
			cin>>s;
			for(int l=0;l<n;l++)
			{
				arr[l]=arr[l]*s;
			}
		}
		else if(c=='D')
		{
		      int s;
			cin>>s;
			for(int l=0;l<n;l++)
			{
				arr[l]=arr[l]/s;
			}
		}
		else if(c=='P')
		{
			int s,q;
			cin>>s>>q;
			swap(arr[s],arr[q]);
		}
		else if(c=='R')
		{
			 reverse(arr, arr + n);
		}

	}



       cout<<"Case "<<k<<":"<<endl;
       for(int g=0;g<n;g++)
	 {
	 	if(g==n-1)
			cout<<arr[g];
		else

		cout<<arr[g]<<" ";
	 }
		cout<<endl;

    }
    return 0;
}


