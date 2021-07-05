

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string str;
   cin>>str;
   int v=0,c=0,cnt=0;
   for(int i=0;i<n;i++)
   {
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' )
       {
           c=1;
       }
       else
        v=1;
       if(c==1&&v==1)
       {
           cnt++;
           c=0;v=0;
       }
   }
   cout<<cnt<<endl;

}

