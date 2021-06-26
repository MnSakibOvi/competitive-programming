

#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;

while(t--)
{
   int n;
   cin>>n;
   char c='a';
   int mn=min(n,300);
   for(int i=0;i<mn;i++)
   {
       cout<<c;
       c++;
       if(c=='z')
        c='a';


   }
   cout<<endl;
}

}

