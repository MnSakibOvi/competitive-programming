
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int cas=1;cas<=t;cas++)
 {
     int n;
     cin>>n;
     vector< pair <int,int> > vect;
     int a,b;
     for(int i=0;i<n;i++)
     {
        cin>>a>>b;
         vect.push_back( make_pair(a,b) );
     }
     double mx=INT_MIN;
      sort(vect.begin(), vect.end());
      for (int i=0; i<n-1; i++)
      {
        double tm=vect[i+1].first-vect[i].first;
        double km=abs(vect[i+1].second-vect[i].second);
        //cout<<tm<<" "<<km<<endl;
        double res=km/tm;
        mx=max(res,mx);

      }
      printf("Case #%d: %.2lf\n",cas,mx);
 }
}

