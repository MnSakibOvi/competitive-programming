#include<bits/stdc++.h>
using namespace std;

void bokxhod()
{
    //map<int, int> mp;
    //int mp[5] = {0, 0, 0, 0, 0};
    vector<int> mp(5, 0);
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int x;
        scanf("%d", &x);
        mp[x]++;
    }


    int res =0;
    res = res + mp[4];
    if(mp[3] <= mp[1])
    {
        res = res + mp[3];
        mp[1] = mp[1] - mp[3];
        mp[3] = 0;
    }


    else
    {
        res = res+ mp[1];
        mp[3] = mp[3]- mp[1];
        mp[1] = 0;
    }
    res =res + mp[3];
    res = res + mp[2] / 2;
    mp[2] = mp[2] % 2;
    if(mp[2] > 0)
    {
        res = res + 1;
        if(mp[1] > 2)
        {
            mp[1] = mp[1]- 2;
        }
        else
        {
            mp[1] = 0;
        }
    }
    res = res + mp[1] / 4;
    mp[1] = mp[1] % 4;
    if(mp[1] > 0) res = res + 1;
    printf("%d", res);
}

int main()
{
    bokxhod();
    return 0;
}
