#include<bits/stdc++.h>
using namespace std;

int problem()
{
    int n,c=0;
    string str;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        if(str=="Tetrahedron")
            c=c+4;
        if(str=="Cube")
            c=c+6;
            if(str=="Octahedron")
                c=c+8;
        if(str=="Dodecahedron")
            c=c+12;
            if(str=="Icosahedron")
                c=c+20;

    }
    return c;
}
int main()
{

    cout<<problem();
}

