
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int node,edge;
   cin>>node>>edge;
   int mat[node][node] ;
   memset(mat, 0, sizeof mat);
   vector<int>adj[node+1];
   for(int i=0;i<edge;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);

       mat[a-1][b-1]=1;
       mat[b-1][a-1]=1;

   }
   for(int i=0;i<node;i++)
   {
       for(int j=0;j<node;j++)
       {
           cout<<mat[i][j]<<" ";
       }
       cout<<endl;
   }
   for(int i=1;i<=node;i++)
   {
       cout<<i<<"->";
       for(int j=0;j<adj[i].size();j++)
       {
           cout<<adj[i][j]<<" ";
       }
       cout<<endl;
   }

}

