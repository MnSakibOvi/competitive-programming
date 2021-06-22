

#include<bits/stdc++.h>
using namespace std;
int main()
{

//     freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n;

    while(cin>>n && n!=0)
    {
        vector<pair<int,int>>v;
        map<int,int>mp1;
        map<int,int>mp2;
        int res=0;
        vector<int>v1;
        for(int k=0; k<n; k++)
        {
            int a,b;
            cin>>a>>b;
            mp1[a]++;
            mp2[b]++;
            if(mp1[a]==1)
                v1.push_back(a);
            // v.push_back(make_pair(a,b));

        }
        // sort(v.begin(),v.end());

//        for (int i=0; i<n; i++)
//            {
//
//                cout << v[i].first << " "
//                     << v[i].second << endl;
//
//            }
//        for(int i=0;i<n;i++)
//        {
//            int c=v[i].first;
//            int d=v[i].second;
//            if(c!=-1 && d!=-1)
//            {
//                 int fl=0;
//                for(int j=i+1;j<n;j++)
//                {
//                    if(v[j].first==d && v[j].second==c)
//                    {
//                        fl=1;
//                        v[j].first=-1;
//                        v[j].second=-1;
//                        break;
//                    }
//                }
//                if(fl==0)
//                {
//                    res=1;
//                    break;
//                }
//
//
//
//            }
//
//
        for(int i=0; i<v1.size(); i++)
        {
            int g=v1[i];
            if(mp1[g]!=mp2[g])
            {
                res=1;
                break;
            }

        }
        (res==1)?cout<<"NO"<<endl:cout<<"YES"<<endl;


    }

}

