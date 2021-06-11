
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int arr[n],arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arr2[i]=arr[i];
	}
	sort(arr2 ,arr2+n);
	int m;
	cin>>m;
	while(m--)
	{
		long long int a,l,r,sum=0;
		cin>>a>>l>>r;
		if(a==1)
		{
			while(l<=r)
			{
				if(l!=r)
				{
					sum=sum+arr[r-1];
					sum=sum+arr[l-1];
				}
				else
				{
					sum=sum+arr[l-1];
				}
				l++;
				r--;
				//cout<<"sum="<<sum<<endl;

			}

			cout<<sum<<endl;
		}
		else
		{
			while(l<=r)
			{
				if(l!=r)
				{
					sum=sum+arr2[r-1];
					sum=sum+arr2[l-1];
				}
				else
				{
					sum=sum+arr2[l-1];
				}
				l++;
				r--;
				//cout<<"sum="<<sum<<endl;

			}

			cout<<sum<<endl;

		}
	}



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


