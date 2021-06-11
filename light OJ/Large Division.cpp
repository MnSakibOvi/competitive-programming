

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {

		long long int a,b,c=0,i;
		string str;
		cin>>str>>b;
            if(str[0]=='-')
            i=1;
            else  i=0;
            while(i<str.size())
		{
			//cout<<c<<" ";
			c=c*10+str[i]-'0';
			c=c%b;
			i++;
		}


       cout<<"Case "<<k<<": ";
       if(c==0)
		cout<<"divisible"<<endl;
	 else
		cout<<"not divisible"<<endl;



    }
    return 0;
}




