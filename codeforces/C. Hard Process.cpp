


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



int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
            v.push_back(i);

    }
    if(v.size()<=k)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"1 ";
        }
        cout<<endl;
    }
    else
        {
        int c=0;
        k++;
        int mx,a,b;
        mx=v[k-1];
        a=0;
        b=v[k-1]-1;


        for(int i=0;i<v.size();i++)
            {
                if(i+k<v.size())
                {

                  int  dis=(v[i+k]-v[i])-1;
                    if(dis>mx)
                   {
                        mx=dis;
                       a= v[i]+1;
                       b=v[i+k]-1;


                   }

                }
                else
                {
                     int  dis=(n-v[i])-1;

                    if(dis>mx)
                    {
                        mx=dis;
                       a= v[i]+1;
                       b=n-1;

                    }

                }



            }

            for(int i=0;i<n;i++)
            {
                if(i<a || i>b)
                {
                    cout<<arr[i]<<" ";
                }
                else
                    cout<<"1 ";
            }
            cout<<endl;

    }



    return 0;
}
