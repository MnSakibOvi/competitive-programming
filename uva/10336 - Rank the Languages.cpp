

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
// #include <stack>
// #include <ctime>
// #include <cassert>
// #include <complex>
// #include <string>
// #include <cstring>4 6


// #include <bitset>
using namespace std;

// #pragma GCC optimize("Ofast,no-stack-protector")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma GCC optimize("unroll-loops")

#define ll              long long int
#define vi              vector< int >
#define vll             vector< ll >

#define sc              scanf
#define pf              printf
#define cspf(i)         pf("Case #%d: ", i)
#define spc             pf(" ")
#define line            pf("\n");
#define yes             cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define dib(x)         printf("x = %d,",x)

//------------------------------------
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
#define vout(v,sz)      for(int w=0;w<sz;w++){if(w) spc; cout<<v[w];}
#define all(v)          v.begin(), v.end()
#define rall(v)         v.rbegin(), v.rend()
#define unq(v)          sort(all(v)),(v).resize(unique(all(v))-v.begin())
#define fastIO          ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

#define sc1(x)          sc("%d",&x);
#define sc2(x,y)        sc("%d %d", &x, &y)
#define sc3(x,y,z)      sc("%d %d %d", &x, &y, &z)
#define scl1(x)         sc("%lld",&x);
#define scl2(x,y)       sc("%lld %lld", &x, &y)
#define scf1(x)         sc("%lf",&x);
#define scf2(x,y)       sc("%lf %lf", &x, &y)

#define pf1(x)          pf("%d",x);
#define pf2(x,y)        pf("%d %d", x, y)
#define pfl1(x)         pf("%lld",x);
#define pfl2(x,y)       pf("%lld %lld", x, y)
#define file              freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

#define MOD             (int)(998244353)
#define MaxN            100005
#define inf             0x3f3f3f3f
#define PI              acos(-1.0)  // 3.1415926535897932
#define eps             1e-6

//#define run_time


#ifdef run_time
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1)
{
    cout << name << " = " << arg1 << std::endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr(names, ',');
    cout.write(names, comma - names) << " = " << arg1 <<" | ";
    __f(comma+1, args...);
}
#else
#define debug(...)
#endif

template <class T> inline T bigMod(T p,T e,T M)
{
    T ret=1;
    for(; e>0; e>>=1)
    {
        if(e&1) ret=(ret*p)%M;
        p=(p*p)%M;
    }
    return (T)ret;
}
template <class T> inline T modInverse(T a,T M)
{
    return bigMod(a,M-2,M);
}
template <class T> inline T gcd(T a,T b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
template <class T> inline T lcm(T a,T b)
{
    a=abs(a);
    b=abs(b);
    return (a/gcd(a,b))*b;
}

int dx[] = { 1,-1, 0, 0};                //graph moves
int dy[] = { 0, 0, 1,-1};               //graph moves
//________________________________________________________________________________________________________
int n;
int cnt=0;
vector<string>g;
int par[MaxN];
int sz[MaxN];
bool tra[27];
int mx=INT_MIN;
int find_parant(int v)
{
if(par[v]!=v)
{
   return par[v]= find_parant(par[v]);
}
else
   return v;
}
void marge(int a,int b,char c)
{

    if(sz[a]>=sz[b])
    {
        sz[a]+=sz[b];
        par[b]=a;
        cout<<sz[a]<<endl;

    }
    else
    {
         sz[b]+=sz[a];
        par[a]=b;
        cout<<sz[b]<<endl;

    }

}
int h,w;
void dfs(int a,int b,char c){
    if(g[a][b]==c)
    {

        g[a][b]='X';
        if(b>0)
        {
            dfs(a,b-1,c);
        }
        if(b<w-1)
        {
            dfs(a,b+1,c);
        }
        if(a>0)
        {
           dfs(a-1,b,c);
        }
         if(a<h-1)
        {
           dfs(a+1,b,c);
        }


    }
    else return;

}


int main()
{
#ifdef SAKIB_OVI
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);

#endif

int t;
cin>>t;
for (int cas = 1; cas <= t; cas++)
{

        cin>>h>>w;
        for(int i=0;i<h;i++)
        {
            string str;
            cin>>str;
            g.push_back(str);

        }
        map<char,int>mp;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(g[i][j]!='X')
                {
                        mp[g[i][j]]++;
                        //cout<<g[i][j]<<"  "<<mp[g[i][j]]<<endl;cout<<g[i][j]<<"  "<<mp[g[i][j]]<<endl;

                        dfs(i,j,g[i][j]);


                }
            }
        }
        cout<<"World #"<<cas<<endl;
      map<ll,set<char>,greater<ll>>mop;
      for(auto u:mp)
      {
        mop[u.second].insert(u.first);
      }
      for(auto u:mop)
      {
        for(auto s:u.second)
        {
            cout<<s<<": "<<u.first<<endl;
        }
      }

        g.clear();


}

#ifdef SAKIB_OVI
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

