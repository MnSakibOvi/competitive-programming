

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int cas=1;cas<=t;cas++)
{
    int ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    int dx=ax+cx-bx;
    int dy=ay+cy-by;
    int g=0.5 * (((ax * by) + (bx * cy) + (cx * dy) + (dx * ay)) - ((ay * bx) + (by * cx) + (cy * dx) + (dy * ax)));
    if(g<0)
        g=g*(-1);
    cout<<"Case "<<cas<<": "<<dx<<" "<<dy<<" "<<g<<endl;
}


}
