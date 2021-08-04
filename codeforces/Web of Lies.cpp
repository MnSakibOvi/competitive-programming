
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,mn,mx;
    cin>>n>>m;
    int cnt=n;
    map<int,int>mp,mp1;
    int a,b;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
         mn=min(a,b);
         mx=max(a,b);

        mp[mx]++;//boro
        mp1[mn]++;//choto

        if(mp1[mn]>0 && mp[mn]==0)
           {
             cnt--;
             mp[mx]--;
           }

    }
    int g=cnt;
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x==3)
        {
            cout<<cnt<<endl;
            cnt=g;
        }
        else if(x==1)
        {
            cin>>a>>b;
            mp[mx]++;
            mp1[mn]++;

            if(mp1[mn]>0 && mp[mn]==0)
               {
                   cnt--;
                    mp[mx]--;
               }
        }
        else
        {
              cin>>a>>b;

           mp[mx]--;
           mp1[mn]--;
           if(mp1[mx]==0 && mp[mx]>0)
           {
             cnt--;
           }
        }

    }

}


