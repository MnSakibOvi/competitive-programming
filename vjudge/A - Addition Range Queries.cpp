//
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//
//int t;
//cin>>t;
//
//while(t--)
//{
//   int n;
//   cin>>n;
//   char c='a';
//   int mn=min(n,300);
//   for(int i=0;i<mn;i++)
//   {
//       cout<<c;
//
//
//
//   }
//   cout<<endl;
//}
//
//}
//
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
    string str,str2;
    cin>>str>>str2;
    int o=0,cnt=0,oc=0;

  for(int i=0;i<n;i++)
  {
      if(str2[i]=='o')
        o++;


  }
 // cout<<o<<" "<<oc<<" "<<cnt<<endl;
  if(str==str2)
    cout<<"YES"<<endl;
 else if(o>0)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}
}
