#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cntm=0,cntc=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int m,c;
        cin>>m>>c;
        if(m<c)
            cntc++;
        if(m>c)
            cntm++;

    }
    if(cntm>cntc)
        cout<<"Mishka";
     else if(cntm<cntc)
        cout<<"Chris";
     else
        cout<<"Friendship is magic!^^";

}
