#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,y1,x2,y2,f1,f2,sum=0;
	    cin>>x1>>y1>>x2>>y2>>f1>>f2;

	    int mx=max(x1,x2);
	    int mn=min(x1,x2);
	    sum+=(mx-mn);
	   int mxy=max(y1,y2);
	  int  mny=min(y1,y2);
	     sum+=(mxy-mny);

	     if(x1==x2 && x2==f1  && f2<mxy && f2>mny)
            sum+=2;
         else if(y1==y2 && y2==f2 && f1<mx && f1>mn)
            sum+=2;

         if(x1==x2 && y1==y2)
            cout<<"0"<<endl;
         else
            cout<<sum<<endl;

	}


	return 0;
}
