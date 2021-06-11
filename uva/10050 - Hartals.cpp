#include<bits/stdc++.h>
using namespace std;

int main()
{
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
     int t;
     cin>>t;
     while(t--)
     {
     	int n,d;
     	cin>>d;
     	cin>>n;
     	int arr[n];
     	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
      int h1=0,h2=0,h3=0;
      map<int,int>mp;
      for(int i=0;i<n;i++)
	{
		for(int j=1;j<=d;j++)
		{
			h1=arr[i]*j;
			if(h1>d)
				break;
			else
			{
				if(h1%7!=0 && h1%7!=6 && h1!=6)
				{
					mp[h1]++;
				}
			}
		}
	}
	cout<<mp.size()<<endl;

     }
}

