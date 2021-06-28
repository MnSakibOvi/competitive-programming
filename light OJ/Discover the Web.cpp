
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
     cout<<"Case "<<i<<":"<<endl;
    stack<string> backw,forw;
    backw.push("http://www.lightoj.com/");
    string str,ss;
    ss="http://www.lightoj.com/";
    while(cin>>str && str!="QUIT")
    {
        //cout<<"->";
        if(str=="VISIT")
        {
            string s;
            cin>>s;
            ss=s;
            cout<<ss<<endl;
            backw.push(s);
            while(forw.size()>=1)
                forw.pop();

        }
        else if(str=="BACK")
        {
          if(backw.size()<=1)
             cout<<"Ignored"<<endl;
          else
            {
                ss=backw.top();
                forw.push(ss);
                backw.pop();
                ss=backw.top();

                cout<<ss<<endl;
            }




        }
        else if(str=="FORWARD")
        {
            if(forw.size()<1)
                cout<<"Ignored"<<endl;
                else
                {


                    ss=forw.top();
                    cout<<ss<<endl;
                      backw.push(ss);
                    forw.pop();

                }

        }
    }
    }

}

