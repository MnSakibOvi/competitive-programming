
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
// #include <cstring>
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


int main()
{
#ifdef run_time
    clock_t tStart = clock();
#endif

    int t;
    sc1(t);

    while(t--)
    {
        int a,b,r;
        sc3(a,b,r);
        if(r*2<=a && r*2<=b)
            yes;
        else
            no;


    }



#ifdef run_time
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}

