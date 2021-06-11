#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,l,p,c=0,i,j;


    cin>>k>>n;
    if(k%2==0)
        l=k/2;
    else
        l=(k/2)+1;
        if(n<=l)
        {
            cout<<(n*2)-1;
        }
        else
            cout<<(n-l)*2;


}
