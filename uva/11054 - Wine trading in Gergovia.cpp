

#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n;
   while(cin>>n && n!=0)
   {
       long long int sum=0,x,cnt=0;
       for(int i=0;i<n;i++)
       {
           cin>>x;
          sum+=x;
          cnt+=abs(sum);

       }

       cout<<cnt<<endl;
   }
}

