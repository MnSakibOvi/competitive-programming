
#include <bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int x=0,o=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='X' )
            x++;
        if(s1[i]=='O')
            o++;

    }
     for(int i=0;i<s1.size();i++)
    {
        if(s2[i]=='X' )
            x++;
        if(s2[i]=='O')
            o++;

    }
     for(int i=0;i<s1.size();i++)
    {
        if(s3[i]=='X' )
            x++;
        if(s3[i]=='O')
            o++;

    }
    //cout<<x<<" "<<o<<endl;
    if(x==o || x=c+1)
        cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;


}
}


