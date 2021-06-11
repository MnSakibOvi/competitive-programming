#include<bits/stdc++.h>
using namespace std;

int main()
{
   //freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
    int t,o1,o2,x,y;
   while( cin>>t)
   {
    if(t<=0)
        return 0;
    cin>>o1>>o2;
    while(t--)
    {
      cin>>x>>y;
      if(x==o1 || y==o2)
            cout<<"divisa"<<endl;
      else if(x>o1 && y>o2)
      cout<<"NE"<<endl;
      else if(x<o1 && y>o2)
         cout<<"NO"<<endl;
      else if(x>o1 && y<o2)
         cout<<"SE"<<endl;
      else
         cout<<"SO"<<endl;

    }
   }



}
