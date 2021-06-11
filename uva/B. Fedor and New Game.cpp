#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v;
    int m,n,k,x;
    cin>>n>>m>>k;
 //  fact = n^m;1
   // cout<<fact<<" "<<fact2<<endl;
   for(int i=0;i<=m;i++)
   {
       cin>>x;
       v.push_back(x);
   }
   int num=v[v.size()-1];//last digit
   int res=0;

   for(int i=0;i<v.size()-1;i++)
   {
       int cnt=0,val=v[i]^num;//find XOR
       while(val>0)
       {
           int m=val%2;
           val=val/2;
           if(m==1)
            cnt++;//find two digit's 1 count

       }
       if(cnt<=k)//if cnt less then or = k
        res++;
   }
   cout<<res<<endl;



}


