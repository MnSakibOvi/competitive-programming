
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
   string str;
   cin>>str;
   int e,p,c,z;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]=='e')
        e=i;
        if(str[i]=='p')
        p=i;
         if(str[i]=='c')
        c=i;
         if(str[i]=='z')
        z=i;
   }
   if(z<p && z<c && e<c && p<c)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}

}
