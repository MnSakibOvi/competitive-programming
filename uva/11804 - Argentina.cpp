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
#define line            pf("\n")
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
#define MaxN            100000
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



int main()
{
#ifdef SAKIB_OVI
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

#endif
//file

    int t;
    cin>>t;
    for(int cas=1; cas<=t; cas++)
    {
        string str[10];
        int att[10],def[10];
        vector< pair <int,int> > pa;
        vector<int>v;
        vector<int> adj[100];
        map<string,int>name;

        for(int i=0; i<10; i++)
        {
            cin>>str[i]>>att[i]>>def[i];
            v.push_back(att[i]);
            adj[att[i]].push_back(def[i]);
            name[str[i]]++;

        }
        sort(v.begin(),v.end(),greater<int>());
        // sort(str,str + 10);
        int cnt=0;
        map<int,int>dup;
        for(int i=0; i<v.size(); i++)
        {
            //for(int j=0;j<adj.[v[i]].size();j++)
            dup[v[i]]++;
            if(dup[v[i]]==1)
            {

                vector<int>srt;
                for(auto x:adj[v[i]])
                {
                    srt.push_back(x);
                }
                sort(srt.begin(),srt.end());
                for(int j=0; j<srt.size(); j++)
                {
                    // cout<<srt[j]<<" ";
                    pa.push_back( make_pair(v[i],srt[j]) );
                    cnt++;
                    if(cnt==5)
                        break;

                }
                //cout<<endl;
            }
            if(cnt==5)
                break;
        }
//        for (int i=0; i<pa.size(); i++)
//        {
//            cout << pa[i].first << " "
//                 << pa[i].second << endl;
//        }
        map<string,int>res1,res2;
        map<string, int>::iterator itr;
        int cnn=0;
        for (itr = name.begin(); itr != name.end(); ++itr)
        {
            string p=itr->first;
            for(int i=0; i<10; i++)
            {
                if(str[i]==p)
                {


                    int attack=att[i];
                    int defend=def[i];
                    int flag=0;
                    for (int j=0; j<pa.size(); j++)
                    {
                        if(attack==pa[j].first && defend==pa[j].second && cnn<5)
                        {
                            res1[str[i]]++;
                            flag=1;
                            pa[j].first=-1;
                            cnn++;
                            break;
                        }
                    }
                    if(flag==0)
                        res2[str[i]]++;

                }

            }
        }

        cout<<"Case "<<cas<<":"<<endl;
        cout<<"(";
        for (itr = res1.begin(); itr != res1.end(); ++itr)
        {
            if(itr==res1.begin())
            cout <<itr->first;
            else
                cout<<", "<<itr->first;

        }
        cout<<")"<<endl<<"(";
        for (itr = res2.begin(); itr != res2.end(); ++itr)
        {
            if(itr==res2.begin())
            cout <<itr->first;
            else
                cout<<", "<<itr->first;
        }
        cout<<")"<<endl;
    }

//wellcome to heel bitch

#ifdef SAKIB_OVI
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
