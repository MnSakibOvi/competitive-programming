
#include<bits/stdc++.h>
using namespace std;


int main()
{
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
    int p,b,h,w;

    while( cin>>p>>b>>h>>w)

    {

    	int mn=INT_MAX,res=0;
    	//cout<<"min = "<<mn<<endl;

    	if(p==0)
		return 0;
        for(int i=0;i<h;i++)
	  {
	  	int price;
	  	cin>>price;
	  	for(int j=0;j<w;j++)
		{
			int bed;
			cin>>bed;
			if(bed>=p)
			{
				res=p*price;
			}
			else
				continue;


		}
		if(res!=0)
		mn=min(mn,res);
	  }
	  if(mn<=b)
	  {
	  	if(mn==INT_MAX)
		{
			cout<<"stay home"<<endl;
		}
		else
		cout<<mn<<endl;
	  }
	  else
		cout<<"stay home"<<endl;

    }



}

