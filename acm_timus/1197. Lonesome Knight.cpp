#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
    if(str=="a1" || str=="h1" || str=="a8" || str=="h8")
        cout<<"2"<<endl;
    else if(str=="a2" || str=="h2" || str=="a7" || str=="h7" || str=="g1" || str=="b1" || str=="b8" || str=="g8")
        cout<<"3"<<endl;
    else if(str=="b2" || str=="g2" || str=="b7" || str=="g7")
        cout<<"4"<<endl;
    else if(str[0]=='a' || str[0]=='h' || str[1]=='8' || str[1]=='1')
        cout<<"4"<<endl;
    else if(str[0]=='b' || str[0]=='g' || str[1]=='7' || str[1]=='2')
        cout<<"6"<<endl;
    else
        cout<<"8"<<endl;
}
int main()
{
    int t;
    cin>>t;
    //  t=1;
    while(t--)
    {
        solve();
    }
}





