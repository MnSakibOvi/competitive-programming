#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string str,str1;
    cin>>str;
   n=(str.size()/2);
sort(str.begin(), str.end());

for(i=0;i<n;i++){
str.erase(str.begin()+0);
}
for(i=0;i<=str.size();i++){
cout<<str[i];
if(i==(str.size()-1))
    break;
cout<<"+";
}

}
