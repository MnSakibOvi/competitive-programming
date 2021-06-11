//
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//
//    vector<int>v;
//    int m,n,k,x;
//    cin>>n>>m>>k;
//
//   for(int i=0;i<=m;i++)
//   {
//       cin>>x;
//       v.push_back(x);
//   }
//   int num=v[v.size()-1];
//   int res=0;
//
//   for(int i=0;i<v.size()-1;i++)
//   {
//       int cnt=0,val=v[i]^num;
//      cnt=__builtin_popcount(val);
//       if(cnt<=k)
//        res++;
//   }
//   cout<<res<<endl;
//
//
//
//}
#include <cstdio>

using namespace std;

int N,cont[37];

void solve(int n, int sum){
    if(n==N/2) ++cont[sum];
    else{
        for(int i = 0;i<10;++i)
            solve(n+1,sum+i);
    }
}

int main(){
    scanf("%d",&N);

    solve(0,0);

    int ans = 0;
    for(int i = 0;i<=36;++i) ans += cont[i]*cont[i];

    printf("%d\n",ans);

    return 0;
}
