
#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
   int n,a,b;
   cin>>n>>a>>b;
   string str;
   cin>>str;
    if(b>0)
        cout<<(n*a)+(n*b)<<endl;
    else
    {
        int cnt=0;
        for(int i=0;i<str.size();i++)
        {
           if(i!=0)
           {
               if(str[i]!=str[i-1])
                cnt++;
           }

        }
        cnt++;
    int sum=n*a;

    int g=ceil(cnt/2.00);
    if(g==cnt/2)
    g++;

    //cout<<g<<endl;
    sum+=(g*b);
    cout<<sum<<endl;
    }

}

}


