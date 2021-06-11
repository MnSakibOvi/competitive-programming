#include<bits/stdc++am,i .h>
using namespace std;

int main()
{
    queue<int> Q;
    //cout<<"enter elements and value :"<<endl;
    int n,y,len = INT_MIN;
    cin>>n;
    cout<<"value :"<<endl;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        Q.push(x);
    }
    cout<<"max element is:"<<endl;
    for(int i=1; i<=n; i++)
    {
       y = Q.front();
       Q.pop();
       if(y > len)
          len = y;
    }
    cout<<len;
}
