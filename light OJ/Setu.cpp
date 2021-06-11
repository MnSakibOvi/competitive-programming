


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
    	   cout<<"Case "<<k<<":"<<endl;
    	int n;
    	cin>>n;
    	int sum=0;
    	while(n--)
	{
		string str;
		cin>>str;
		if(str=="report")
		{
			cout<<sum<<endl;
		}
		else
		{
			int taka;
			cin>>taka;
			sum=sum+taka;
		}
	}







    }
    return 0;
}
