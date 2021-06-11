//
//#include <bits/stdc++.h>
//// #include <iostream>
//// #include <cstdio>
//// #include <cstdlib>
//// #include <algorithm>
//// #include <cmath>
//// #include <vector>
//// #include <set>
//// #include <map>
//// #include <queue>
//// #include <stack>
//// #include <ctime>
//// #include <cassert>
//// #include <complex>
//// #include <string>
//// #include <cstring>
//// #include <bitset>
//using namespace std;
//
//// #pragma GCC optimize("Ofast,no-stack-protector")
//// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//// #pragma GCC optimize("unroll-loops")
//
//#define ll              long long int
//#define vi              vector< int >
//#define vll             vector< ll >
//
//#define sc              scanf
//#define pf              printf
//#define cspf(i)         pf("Case #%d: ", i)
//#define spc             pf(" ")
//#define line            pf("\n")
//#define yes             cout<<"YES"<<endl
//#define no             cout<<"NO"<<endl
//#define dib(x)         printf("x = %d,",x)
//
////------------------------------------
//#define ff              first
//#define ss              second
//#define mp              make_pair
//#define pb              push_back
//#define ppb             pop_back
//#define tp(v,j)         get<j>(v)
//#define Log(b,x)        (log(x)/log(b))
//
//#define FOR(i,x,y)      for(int i = int(x); i < int(y); i++)
//#define ROF(i,x,y)      for(int i = int(x)-1; i >= int(y); i--)
//#define clr(arr,x)      memset(arr, x, sizeof arr)
//#define vout(v,sz)      for(int w=0;w<sz;w++){if(w) spc; cout<<v[w];}
//#define all(v)          v.begin(), v.end()
//#define rall(v)         v.rbegin(), v.rend()
//#define unq(v)          sort(all(v)),(v).resize(unique(all(v))-v.begin())
//#define fastIO          ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
//
//#define sc1(x)          sc("%d",&x);
//#define sc2(x,y)        sc("%d %d", &x, &y)
//#define sc3(x,y,z)      sc("%d %d %d", &x, &y, &z)
//#define scl1(x)         sc("%lld",&x);
//#define scl2(x,y)       sc("%lld %lld", &x, &y)
//#define scf1(x)         sc("%lf",&x);
//#define scf2(x,y)       sc("%lf %lf", &x, &y)
//
//#define pf1(x)          pf("%d",x);
//#define pf2(x,y)        pf("%d %d", x, y)
//#define pfl1(x)         pf("%lld",x);
//#define pfl2(x,y)       pf("%lld %lld", x, y)
//#define file              freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
//
//#define MOD             (int)(998244353)
//#define MaxN            100000
//#define inf             0x3f3f3f3f
//#define PI              acos(-1.0)  // 3.1415926535897932
//#define eps             1e-6
////#define run_time
//
//
//#ifdef run_time
//#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
//template < typename Arg1 >
//void __f(const char* name, Arg1&& arg1)
//{
//    cout << name << " = " << arg1 << std::endl;
//}
//template < typename Arg1, typename... Args>
//void __f(const char* names, Arg1&& arg1, Args&&... args)
//{
//    const char* comma = strchr(names, ',');
//    cout.write(names, comma - names) << " = " << arg1 <<" | ";
//    __f(comma+1, args...);
//}
//#else
//#define debug(...)
//#endif
//
//template <class T> inline T bigMod(T p,T e,T M)
//{
//    T ret=1;
//    for(; e>0; e>>=1)
//    {
//        if(e&1) ret=(ret*p)%M;
//        p=(p*p)%M;
//    }
//    return (T)ret;
//}
//template <class T> inline T modInverse(T a,T M)
//{
//    return bigMod(a,M-2,M);
//}
//template <class T> inline T gcd(T a,T b)
//{
//    if(b==0)return a;
//    return gcd(b,a%b);
//}
//template <class T> inline T lcm(T a,T b)
//{
//    a=abs(a);
//    b=abs(b);
//    return (a/gcd(a,b))*b;
//}
//
//int dx[] = { 1,-1, 0, 0};                //graph moves
//int dy[] = { 0, 0, 1,-1};               //graph moves
//int check(ll n)
//{
//    int cnt = 0;
//    while (n) {
//        cnt += n & 1;
//        n >>= 1;
//    }
//    return cnt;
//}
//int main()
//{
//#ifdef run_time
//    clock_t tStart = clock();
//#endif
//
//    int t;
//    sc1(t);
//
//   for(int i=1;i<=t;i++)
//    {
//        ll n;
//        scl1(n);
//        cout<<"Case "<<i<<": ";
//        int g=check(n);
//        while(true)
//        {
//            n++;
//            if(check(n)==g)
//            {
//                cout<<n<<endl;
//                break;
//            }
//
//        }
//
//
//
//
//    }
//
//
//
//#ifdef run_time
//    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
//#endif
//
//    return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
string binary (int a)
{
    string str="";
for(int i=31 ;i>=0;i--)
    {
        int k=a%2;
        a=a/2;
        if(k==1)
            str+='1';
        else
            str+='0';



    }
    //cout<<cnt<<endl;
    return str;

}
int decimal(string str)
{
	int x=0;
	for(int i=0;i<32;i++)
	{
		x=(2*x)+str[i]-'0';
	}
	return x;


}
void solve()
{

    int t;
    cin>>t;
    for(int v=1; v<=t; v++)
    {
        int n,h;
        cin>>n;
        string g=binary(n);
      // cout<<g<<endl;
        reverse(g.begin(),g.end());
       // cout<<g<<endl;
          next_permutation(g.begin(), g.end());
         // cout<<g<<endl;


       int k=decimal(g);
        //cout<<g<<endl;

        cout<<"Case "<<v<<": ";
        cout<<k<<endl;
    }
}




int main()
{
    int t;
//cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
