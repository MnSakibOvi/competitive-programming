#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int k,c=0;
    getline(cin,str);
     sort(str.begin(), str.end());
     if(str.size()==2)
        cout<<"0";
        else if(str.size()==3)
            cout<<"1";
        else{
            k=(str.size()-3)/3;
                //cout<<k+1;

     int d=((k)*2);
     for(int i=d;i<str.size()-1;i++)
     {
         if(str[i]==str[i+1])
            c++;
     }
//     cout<<"c ="<<c;


 cout<<str<<endl;
  cout<<str.size();
     cout<<(k+1)-c;
        }
}
//int main()
//{
//
//
//}

