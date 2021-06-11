#include<bits/stdc++.h>

using namespace std;
int main()
{
  string str1,str2,str3,str4;
  cin>>str1;
  cin>>str2;
  cin>>str3;
  str4=str1+str2;
 // cout<<str4<<endl;
    sort(str4.begin(), str4.end());
     sort(str3.begin(), str3.end());
     // cout<<str4<<endl;
      // cout<<str3;
if(str3==str4)
    cout<<"Yes";
else cout<<"No";
}
