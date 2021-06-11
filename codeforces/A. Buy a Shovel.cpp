
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i=1,sum=0;
    cin>>k>>r;
    while(true)
    {
        sum=sum+k;
        if(sum%10==0 || (sum-r)%10==0)

           {
               cout<<i;
            break;
           }
        i++;

    }
}
