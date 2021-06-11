//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    int n, m, c, t=1;
//    while (cin >> n >> m >> c)
//    {
//        int sum=0,mx=0,flag=0,ans=0;
//        map<int, int>mp;
//        int arr[n+1],ara[m+1];
//        if(n==0 && m==0 && c==0)
//            break;
//        for(int i=1; i<=n; i++)
//        {
//            cin>>arr[i];
//            mp[arr[i]] = 1;
//        }
//        for(int i=1; i<=m; i++)
//            cin>>ara[i];
//        for(int i=1; i<=m; i++)
//        {
//            int k=arr[ara[i]];
//            mp[k]++;
//            if(mp[k]%2==0)
//            {
//                sum += k;
//                ans = max(ans, sum);
//                if(sum > c)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//            else
//                sum -=k;
//        }
//        if(flag==1)
//        {
//            cout<<"Sequence "<<t<<endl;
//            cout<<"Fuse was blown."<<endl;
//        }
//        else
//        {
//           cout<<"Sequence "<<t<<endl;
//            cout<<"Fuse was not blown."<<endl;
//            cout<<"Maximal power consumption was "<<ans<<" amperes."<<endl;
//        }
//        cout<<endl;
//        t++;
//        mp.clear();
//    }
//}
#include <bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n, m, c, t=1;
    while (cin >> n >> m >> c)
    {
        int sum=0,mx=0,flag=0,ans=0;
        map<int, int>mp;
        int arr[n+1],ara[m+1];
        if(n==0 && m==0 && c==0)
            break;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            mp[i] = 1;
        }
        for(int i=1; i<=m; i++)
            cin>>ara[i];
        for(int i=1; i<=m; i++)
        {

            mp[ara[i]]++;
            if(mp[ara[i]] % 2 ==0)
            {
                sum += arr[ara[i]];
                ans = max(ans, sum);
                if(sum > c)
                {
                    flag = 1;
                    break;
                }
            }
            else
                sum -= arr[ara[i]];
        }
        if(flag==1)
        {
            cout<<"Sequence "<<t<<endl;
            cout<<"Fuse was blown."<<endl;
        }
        else
        {
           cout<<"Sequence "<<t<<endl;
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<ans<<" amperes."<<endl;
        }
        cout<<endl;
        t++;
        mp.clear();
    }
}
