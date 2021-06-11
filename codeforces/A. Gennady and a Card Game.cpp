#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j,flag=0;
    string strm,str1,str2,str3,str4,str5,strs;
    cin>>strm>>str1>>str2>>str3>>str4>>str5;
    strs=str1+str2+str3+str4+str5;

   // cout<<strs;

      for( j=0;j<strs.size();j++)
      {
          if(strm[0]==strs[j] || strm[1]==strs[j])
          {
              flag=1;
              break;
          }

      }

  if(flag==1)
    cout<<"YES";
  else cout<<"NO";

}
