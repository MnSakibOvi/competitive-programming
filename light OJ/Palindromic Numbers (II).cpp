
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
    	string str;
    	cin>>str;
    	int i=0,j=str.size()-1,flag=0;
    	while(i<j)
	{
		if(str[i]!=str[j])
		{
		flag=1;
		break;
		}
		i++;
		j--;
	}


       cout<<"Case "<<k<<": ";
       if(flag==1)
		cout<<"No"<<endl;
	 else
		cout<<"Yes"<<endl;


    }
    return 0;
}



