
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int k=1; k<=t; k++)
    {
    	long long int n,m,cnt=0,f,s;
    	cin>>n>>m;
    	n--;
    	f=n/3;
    	f=f*2;
    	if(n%3==2)
		f++;
	s=m/3;
    	s=s*2;
    	if(m%3==2)
		s++;

		cnt=s-f;




//cout<<f<<" "<<s<<endl;

       cout<<"Case "<<k<<": "<<cnt<<endl;

    }

}



