

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int m;
    cin >> m;
    int res[100005]={0};
    int cnt = 0;
    for(int i = 1 ; i < str.size() ; i++)
    {

        if(str[i-1] == str[i])
            cnt++;
        res[i] = cnt;
    }
    int l ,r;
    while(m--)
    {
        cin >> l >> r;
        cout << res[r - 1] - res[l - 1 ] <<endl;
    }


    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int z=1;
    while(z--)
    {
        solve();
    }
}
