#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i,flag=0,flag2=0,flag3=0,flag4=0,ff=0,fff=0,hl=0,hl2=0;
    for(i=0; i<str.size()-1; i++)
    {
        if(str[i]=='A' && str[i+1]=='B' && str[i+2]=='A' && flag3==0 && flag4==0)
        {


            str[i+1]='k';
            str[i+2]='k';
            hl=1;
            flag3=1;
        }
        if(str[i]=='B' && str[i+1]=='A' && str[i+2]=='B'&& flag4==0 && flag3==0)
           {


            str[i+1]='k';
            str[i+2]='k';
            hl2=1;
            flag4=1;
        }
        if(str[i]=='A' && str[i+1]=='B' && flag==0)
        {
            ff=1;
            str[i+1]='k';
            flag=1;
        }
        if(str[i]=='B' && str[i+1]=='A' && flag2==0)
        {
            fff=1;
            str[i+1]='k';
            flag2=1;
        }


    }
 //cout<<ff<<fff<<hl<<hl2<<endl;
    if( ff==1 && fff==1)
        cout<<"YES"<<endl;
    else if(hl==1 && ff==1 || hl==1 && fff==1)
        cout<<"YES"<<endl;
    else if(hl2==1 && ff==1 || hl2==1 && fff==1)
        cout<<"YES"<<endl;


    else
        cout<<"NO"<<endl;
}

