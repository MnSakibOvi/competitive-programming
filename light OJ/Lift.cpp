

#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int t;
    cin>>t;
    for(int v=1; v<=t; v++)
    {
    	int sum=0;
    	int a,b;
    	cin>>a>>b;
    	int f=abs(a-b);
    	sum=f*4;
    	int sec=a*4;
    	sum=sum+sec;
    	sum=sum+19;






        cout<<"Case "<<v<<": ";
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

