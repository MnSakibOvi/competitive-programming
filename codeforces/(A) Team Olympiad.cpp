
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt=0,cnt1=0,cnt2=0,k;
    cin>>t;
    int v[t];
    vector<int> v1;
    for(int h=0; h<t; h++)
    {
        cin>>v[h];
        if(v[h]==1)
            cnt++;
        if(v[h]==2)
            cnt1++;
        if(v[h] == 3)
            cnt2++;
    }
    v1.push_back(cnt);
    v1.push_back(cnt1);
    v1.push_back(cnt2);
    sort(v1.begin(),v1.end());
    cout<<v1[0]<<endl;
    for(int i=0; i<v1[0]; i++)
    {

        int res =0, res1 =0, res2= 0;
        for(int j=0; j<t; j++)
        {
            if(v[j]==1 && res == 0)
            {
                cout<<j+1<<" ";
                v[j]=-1;
                res++;

            }
             if(v[j]==2 && res1 ==0)
            {
                cout<<j+1<<" ";
                v[j]=-1;
                res1++;
            }
             if(v[j]==3 && res2 == 0)
            {
                cout<<j+1<<" ";
                v[j]=-1;
                res2++;
            }
        }
        cout<<endl;
    }

}
