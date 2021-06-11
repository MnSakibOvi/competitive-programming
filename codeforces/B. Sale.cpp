
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int n,m,x,sum=0;
 cin>>n>>m;
 vector<int> v;
 for(int i=0;i<n;i++)
 {
     cin>>x;
     v.push_back(x);
 }
 sort(v.begin(),v.end());
 for(int i=0;i<m;i++)
 {
     if(v[i]<0)
     sum=sum+v[i];
 }


 cout<<abs(sum)<<endl;

}
