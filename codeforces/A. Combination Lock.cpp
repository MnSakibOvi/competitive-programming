#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,sum=0,s=0,l=0;
    cin>>n;
   string str,str2;
  cin>>str;
  cin>>str2;
    //cout<<"25"<<endl;
    for(int i=0;i<n;i++)
    {
       s=min(str[i],str2[i]);
       l=max(str[i],str2[i]);
       s=s-48;
       l=l-48;
       int pick1=l-s;
       int pick2=(10-l)+s;
       int k=min(pick1,pick2);
       //cout<<k<<endl;
       sum=sum+k;



    }
    cout<<sum<<endl;

}
