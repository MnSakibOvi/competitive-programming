
#include <bits/stdc++.h>
// #include <iostream>
// #include <cstdio>
// #include <cstdlib>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// #include <set>
// #include <map>
// #include <queue>
// #include <ctime>
// #include <cassert>
// #include <complex>
// #include <string>
// #include <cstring>
// #include <queue>
// #include <bitset>

using namespace std;

// #pragma GCC optimize("Ofast,no-stack-protector")n
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma GCC optimize("unroll-loops")


#define ll              long long int
#define ull             unsigned long long int
#define vi              vector< int >
#define vll             vector< ll >

#define sc              scanf
#define pf              printf
#define cspf(i)         pf("Case %d: ", i)
#define spc             pf(" ")
#define line            pf("\n")

#define ff              first
#define ss              second
#define mp              make_pair
#define pb              push_back
#define ppb             pop_back
#define tp(v,j)         get<j>(v)
#define Log(b,x)        (log(x)/log(b))

#define FOR(i,x,y)      for(int i = int(x); i < int(y); i++)
#define ROF(i,x,y)      for(int i = int(x)-1; i >= int(y); i--)
#define clr(arr,x)      memset(arr, x, sizeof arr)
#define vout(v)         for(int w=0;w<(int)v.size();w++){if(w) spc; cout<<v[w];}
#define all(v)          v.begin(), v.end()
#define rall(v)         v.rbegin(), v.rend()
#define unq(v)          sort(all(v)),(v).resize(unique(all(v))-v.begin())
#define fastIO          ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

#define sc1(x)          sc("%d",&x)
#define sc2(x,y)        sc("%d %d", &x, &y)
#define sc3(x,y,z)      sc("%d %d %d", &x, &y, &z)
#define scl1(x)         sc("%lld",&x);
#define scl2(x,y)       sc("%lld %lld", &x, &y)
#define scf1(x)         sc("%lf",&x)
#define scf2(x,y)       sc("%lf %lf", &x, &y)

#define pf1(x)          pf("%d",x)
#define pf2(x,y)        pf("%d %d", x, y)
#define pf3(x,y,z)      pf("%d %d %d", x, y, z)
#define pfl1(x)         pf("%lld",x)
#define pfl2(x,y)       pf("%lld %lld",x,y)

#define MOD             1000000007
#define MaxN            1000001
#define MAX             (ll)(1e10)
#define inf             0x3f3f3f3f
#define PI              acos(-1.0)  // 3.1415926535897932
#define eps             1e-6

template <class T> inline T bigMod(T p,T e,T M){T ret=1; for(;e>0;e>>=1){ if(e&1) ret=(ret*p)%M; p=(p*p)%M;} return (T)ret;}
template <class T> inline T modInverse(T a,T M){return bigMod(a,M-2,M);}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline T SQR(T a){return a*a;}

int dx[] = { 1,-1, 0, 0};                //graph moves
int dy[] = { 0, 0, 1,-1};
void solve()
{
    int n,x;
    sc1(n);
    vi v;
    FOR(i,0,n)
    {
        sc1(x);
        v.push_back(x);
    }
    cout<<"->";
    FOR(i,0,n)
    cout<<v[i]<<" ";

}
int main()
{
   int t;
   cin>>t;
   while(t--)
    solve();

}
