


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,cnt=0;
    cin>>t;

    while( t--)

    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort (arr,arr+n);
	 int k,g;
       if(n%2==0)
	 {
	 	k=(n/2)-1;
	 	g=k+1;

	 }
	 else
	 {
	 	int h=n/2;
	 	int dif=abs(arr[h]-arr[h+1]);
	 	int dif2=abs(arr[h]-arr[h-1]);
	 	if(dif<dif2)
		{
			k=h-1;
			g=k+1;
		}
		else
		{
			k=h;
			g=k+1;
		}
	 }
	 cout<<k<<g;

        for(int i=0; i<n; i++)
        {
        	if(arr[k]<arr[g])
		{


            if(k>=0)
                cout<<arr[k]<<" ";
            if(g<n)
                cout<<arr[g]<<" ";
		}
		else
		{
			if(g<n)
                cout<<arr[g]<<" ";
			if(k>=0)
                cout<<arr[k]<<" ";


		}
            k--;
            g++;



        }
        cout<<endl;


    }



}

