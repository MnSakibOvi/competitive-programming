#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int>arr;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
       arr.push_back(input);
       if(arr[i]%2!=0)
       {
        int  c= arr[i]/2;
          cout<<c<<endl;
       }
       else
       {
           int c=(arr[i]/2)-1;
           cout<<c<<endl;
       }

    }

}
