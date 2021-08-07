


#include <bits/stdc++.h>

using namespace std;

           //graph moves
//________________________________________________________________________________________________________
int n;
int cnt=0;
vector<int>g[27];
bool tra[27];
void dfs(int v){
    if(tra[v]==true)
        return;
    tra[v]=true;
    for(int i=0;i<g[v].size();i++)
    {
        if(!tra[g[v][i]])
        {
            dfs(g[v][i]);
        }
    }



}
int main()
{

int t;
cin>>t;
while(t--)
{

  for(int i=1;i<27;i++){
        tra[i]=false;
        g[i].clear();
  }

    char c;
    cin>>c;
    n=c-64;
   // n=n-64;
   // cout<<n<<endl;
    string str;

    cin.ignore();
    while(getline(cin,str))
    {
        if(str.size()==0)
            break;
        else
        {
            int p=str[0]-64;
            int q=str[1]-64;
            //cout<<p<<" "<<q<<endl;
            g[p].push_back(q);
             g[q].push_back(p);

        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
       if(!tra[i])
       {
        cnt++;
        dfs(i);
       }
    }

cout<<cnt<<endl;
if(t>0)
cout<<endl;
}

}

