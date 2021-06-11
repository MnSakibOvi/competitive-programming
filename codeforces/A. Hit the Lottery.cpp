#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,cnt=0;
 cin>>n;
 int k=n/100;
  n=n-(k*100);
// cout<<n;
cnt=cnt+k;
int l=n/20;
  n=n-(l*20);
// cout<<n;
cnt=cnt+l;
int o=n/10;
  n=n-(o*10);
// cout<<n;
cnt=cnt+o;
int b=n/5;
  n=n-(b*5);
// cout<<n;
cnt=cnt+b;
int r=n/1;
  n=r-(o*1);
// cout<<n;
cnt=cnt+r;

cout<<cnt;

}
