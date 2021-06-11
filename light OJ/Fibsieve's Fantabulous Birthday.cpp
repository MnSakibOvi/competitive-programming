
#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int t;
    cin>>t;
    for(int v=1; v<=t; v++)
    {


     long   long int n;
        cin>>n;
      long  double m=sqrt (n);
     long long   int h=ceil(m);//number of lear
        //cout<<h<<endl;
           long long     int top=h*h;//maximum value of that lear
           long long     int down=(h-1)*(h-1)+1;//minimum value ;
//cout<<top<<" "<<down<<endl;
         long long       int dif=top-down;
           long long     int mid_point =dif/2;
           long long     int mid_value=down+mid_point;//mid corner value like 1,3,7
//cout<<mid_value<<endl;
           long long     int f=h,s=h;
        if(h%2==1)
        {
            if(n>mid_value)
            {
                f=f-abs(mid_value-n);

            }
            else if(n<mid_value)
            {
                    long long    int k=mid_value -n;
                //cout<<"k="<<k<<endl;;
                s=s-k;

            }
        }
        else
        {
            if(n>mid_value)
            {
                s=s-abs(mid_value-n);


            }
            else if(n<mid_value)
            {
                f=f-abs(n-mid_value);
            }
        }



        cout<<"Case "<<v<<": ";
        cout<<f<<" "<<s<<endl;
    }
}
int main()
{
    int t;
//cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
