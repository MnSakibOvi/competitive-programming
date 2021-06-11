


#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,flag=0;
   cin>>n;
   string str,str2;
   cin>>str>>str2;
   n--;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]==str2[i] || str[i] == str2[n])
       {
           continue;
       }
       else
       {
           flag=1;
           break;
       }
       n--;

   }
   if(flag==1)
    cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;

}
int main()
{
    int t;
     cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}



