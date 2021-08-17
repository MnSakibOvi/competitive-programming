

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


int n;


int main()
{
#ifdef SAKIB_OVI
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);

#endif
int t;
cin>>t;
while(t--){

    cin>>n;
    vector<string>v;

    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        v.push_back(str);
    }
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
           // cout<<v[i][j]<<" ";
            if(v[i][j]=='1')
            {
                if(v[i+1][j] !='1' && v[i][j+1]!='1')
                {
                    flag=1;
                    i=n;
                    j=n;

                }

            }

        }


    }
    if(flag==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

}
#ifdef SAKIB_OVI
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
