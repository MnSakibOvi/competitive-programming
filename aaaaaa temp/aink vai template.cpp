#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define db double
#define pb push_back
#define pf printf
#define sf scanf
#define MIN INT_MIN
#define MAX INT_MAX
#define GCD(x, y) __gcd((x), (y))
#define LCM(x, y) ((x / GCD((x), (y))) * y)
#define loop0(n) for (int i = 0; i < (n); i++)
#define loop1(n) for (int i = 1; i <= (n); i++)

/*-------------------------------DIRECTION-ARRAY-----------------------------------
int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1};                       //4 Direction
int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};   //8 direction
int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1}; //Knight Direction
----------------------------------------------------------------------------------*/

//inline void ReadInputFromFile(int select)
//{
//    if (select == 0)
//        return;
//    printf("*Input Read from File*\n");
//  //  freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//}

inline unsigned long long getUnsignedLongLong()
{
    long long unsigned int x;
    scanf("%llu", &x);
    return x;
}

inline long long getLongLong()
{
    long long int x;
    scanf("%lld", &x);
    return x;
}

inline double getDouble()
{
    double x;
    scanf("%lf", &x);
    return x;
}

inline int getInt()
{
    int x;
    scanf("%d", &x);
    return x;
}

#define ULL getUnsignedLongLong()
#define LL getLongLong()
#define DB getDouble()
#define II getInt()
#define fileInput(select) ReadInputFromFile((select))
using namespace std;
/*-----------------------Solution----------------------------*/

void multipleTestCases();

void solve()
{
}

int main()
{
    //fileInput(1);
    //solve();
    multipleTestCases();
    return 0;
}

void multipleTestCases()
{
    int T;
    sf("%d", &T);
    //int CASE = 1;
    while (T--)
        solve();
}
