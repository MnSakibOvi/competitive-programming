

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
    	int n,cnt=0;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i!=0)
		{
			if(arr[i]>arr[i-1])

			{
				int g=arr[i]-arr[i-1];
				cnt+=ceil(g/5.00);
			}
		}
	}
	if(arr[0]!=2)
		{
			int g=arr[0]-2;
				cnt+=ceil(g/5.00);
		}


       cout<<"Case "<<k<<": "<<cnt<<endl;



    }
    return 0;
}




