#include <bits/stdc++.h>
using namespace std;
int main()
{

    int m,n,fact=1,fact2=1;
    cin>>n>>m;
    if(n)
    for(int i=min(n,m);i>0;i--)
    {
        fact=fact*i;

    }

   // cout<<fact<<" "<<fact2<<endl;
  cout<<fact<<endl;


}


