

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin>>str;
    string t1="",t2="",tt1="",tt2="";
    for(int i=0; i<10; i++)
    {
        if(i%2==0)
        {
            if(str[i]=='?')
            {
                t1+='1';
                tt1+='0';
            }
            else
            {
                t1+=str[i];
                tt1+=str[i];
            }

        }
        else

        {
            if(str[i]=='?')
            {
                t2+='0';
                tt2+='1';
            }
            else
            {
                t2+=str[i];
                tt2+=str[i];
            }
        }
    }

//    cout<<t1<<"  "<<t2<<endl;
//    cout<<tt1<<"  "<<tt2<<endl;
    int cnt=0,g1=0,g2=0;
    for(int i=0; i<t1.size(); i++)
    {
        if(t1[i]=='1')
        {
            g1++;
        }
        cnt++;
        if(g1>(5-i)+g2)
        {
            break;
        }
        if(t2[i]=='1')
            g2++;


        cnt++;
        if(g1>(5-(i+1))+g2)
        {
            break;
        }



    }
    int res=cnt;
  //  cout<<res<<"         ";
    cnt=0;g1=0;g2=0;
    for(int i=0;i<tt1.size();i++)
    {
        if(tt1[i]=='1')
        {
            g1++;
        }
        cnt++;
        if(g2>(5-(i+1))+g1)
        {
            break;
        }
        if(tt2[i]=='1')
            g2++;


        cnt++;
       if(g2>(5-(i+1))+g1)
        {
            break;
        }


    }
    cout<<min(cnt,res)<<endl;




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




