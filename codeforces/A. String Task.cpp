#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double start_time=clock();
   string c;

  cin>>c;
  transform(c.begin(),c.end(),c.begin(),::tolower);
    for(i=0;i<c.size();i++)
    {

        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='y')
            continue;
        else
            cout<<"."<<c[i];

    }
    double end_time=clock();
    double r;
   r=(end_time-start_time)/CLOCKS_PER_SEC;
   cout<<r;

}
