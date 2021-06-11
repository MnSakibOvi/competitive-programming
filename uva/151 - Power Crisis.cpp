
#include<cstdio>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int r;

bool check(int m)
{
    vector<int> list;
    for(int i = 1; i <= r; i++)
        list.push_back(i);

    int c = 0;
    while(list[c] != 13)
    {

    //    cout<<"m="<<m<<endl;
     //   cout<<"c="<<c<<endl;
        list.erase(list.begin() + c);
        c += m - 1;
        if(c >= list.size())
            c = c % list.size();
    }
   // cout<<"lllllll ="<<list.size();
    return list.size() == 1;
}

int main()
{
    for(;;)
    {
        scanf("%d", &r);
        if(r == 0)
            break;
        int m = 1;
        while(!check(m))
            m++;
        printf("%d\n", m);
    }
}
