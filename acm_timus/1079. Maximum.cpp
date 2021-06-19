

#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;
while(cin>>n )
{
    if(n==0)
        break;
   long long int sum=0,k=0;
    while(true)
    {
        sum+=k;
        k++;
        if(sum>=n)
            break;
    }
    k--;
    cout<<k<<endl;
}
}


