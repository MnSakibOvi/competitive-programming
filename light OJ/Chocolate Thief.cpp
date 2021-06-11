
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int k=1; k<=t; k++)
    {
    	int n;
    	cin>>n;
    	int mn=INT_MAX,mx=INT_MIN;
    	string sx,sm;

    	while(n--)
	{
		int a,b,c,s;
		string str;
		cin>>str>>a>>b>>c;
		s=a*b*c;
		if(s<mn)
		{
			mn=s;
			sm=str;
		}
		if(s>mx)
		{
			mx=s;
			sx=str;
		}
	}
	if(mn==mx)

       cout<<"Case "<<k<<": no thief"<<endl;
       else
	 {
	 	cout<<"Case "<<k<<": "<<sx<<" took chocolate from "<<sm<<endl;
	 }

    }

}



