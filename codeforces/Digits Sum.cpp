

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin>>str;
    string s1="",s2="",ss1="",ss2="";
    for(int i=0; i<str.size(); i++)
    {
        if(i%2==0)
        {
            if(str[i]=='?')
                s1+='1';
            else
                s1+=str[i];

            if(str[i]=='?')
                ss1+='0';
            else
                ss1+=str[i];


        }
        else
        {


            if(str[i]=='?')
                s2+='0';
            else
                s2+=str[i];

            if(str[i]=='?')
                ss2+='1';
            else
                ss2+=str[i];

        }


    }
    //88888888888888888888888888888888888888888888
    cout<<s1<<" "<<s2<<" "<<ss1<<" "<<ss2<<" "<<endl;
    int t1=0,t2=0,cnt=0,cn=0,res1=0;
    for(int i=0; i<s1.size(); i++)
    {
        cn++;

        if(s1[i]=='1')
        {
            t1++;
            cnt++;
        }
        else
            cnt++;

        if((5-cn)+t2<t1)
        {
            res1=cnt;
            break;
        }

        if(s2[i]=='1')
        {
            t2++;
            cnt++;

        }
        else
            cnt++;




    }
    cout<<"next"<<endl;
    t1=0,t2=0,cnt=0;
    int res2=0;
    for(int i=0; i<ss1.size(); i++)
    {

        if(ss1[i]=='1')
        {
            t1++;
            cnt++;
        }
        else
            cnt++;
        if((5-cnt)+t1<t2)
        {
            res2=cnt;
            break;
        }

        if(ss2[i]=='1')
        {
            t2++;
            cnt++;
        }
        else
            cnt++;

        if((5-cnt)+t1<t2)
        {
            res2=cnt;
            break;
        }

    }

    cout<<res1<<" "<<res2<<endl;
    if(res1==0 && res2==0)
        cout<<"10"<<endl;
    if(res1>0 && res2>0)
        cout<<min(res1,res2)<<endl;
    else
        cout<<max(res1,res2)<<endl;

}
int main()
{
    int t;
    cin>>t;
// t=1;
    while(t--)
    {
        solve();
    }
}



