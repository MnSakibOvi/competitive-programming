
#include <bits/stdc++.h>
#define Dpos(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i = 1;
  for(int i=1;i<=t;i++)
    {
        double ab, ac, bc, rat;
        cin >> ab >> ac >> bc >> rat;
        double ans = rat / (rat + 1);

        cout << "Case " << i << ": " << Dpos(6) << ab*sqrt(ans) << endl;
    }
}
