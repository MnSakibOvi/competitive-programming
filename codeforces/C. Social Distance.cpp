

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,fc=0;;
    cin>>n>>k;

    string str;
    cin>>str;
//cout<<"->";
    vector<int>v;
    int cnt=0,flag=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='0')
            cnt++;
        if(str[i]=='1' || i== n-1)
        {
            if(cnt!=0)
                v.push_back(cnt);
            cnt=0;

        }
    }
    int t=0;
    int d=v.size();
    if(str[0]=='0')
        t=1;
    if(str[str.size()-1]=='0')
        d--;



    int x=k+1,sum=0;
    for(int i=t; i<d; i++)
    {
        int s=v[i]-k;
        sum=sum+(s/x);

        // cout<<v[i]<<" ";
    }
//for(int i=0;i<v.size();i++)
//   cout<<v[i]<<" ";
    if(v.size()==1 && str[0]=='0' && str[str.size()-1]=='0')
    {
        int lol=v[0];
        if(lol-2<k)
            sum=1;
        else
        {
            sum=2;
            lol=lol-2;
            lol=lol-k;
             sum=sum+(lol/x);



        }
    }
    else
    {


     if(str[0]=='0')
    {
        int lol=v[0];
        if(lol>k)
            sum++;


            lol--;
             lol=lol-k;
             sum=sum+(lol/x);


    }
     if(str[n-1]=='0')
    {

        int lol=v[v.size()-1];
      //  cout<<lol<<endl;
        if(lol>k)
            sum++;


            lol--;
             lol=lol-k;
             sum=sum+(lol/x);

    }
    }


        cout<<sum<<endl;



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

