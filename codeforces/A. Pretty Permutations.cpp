
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b=1,j=2,flag=0;
        if(n==1)
            cout<<"1 "<<endl;
        else if(n==3)
            cout<<"3 1 2 "<<endl;
            else
            {


       for(int i=0;i<n;i++)
       {

           if(i%2==0)
           {
               cout<<j<<" ";
               j+=2;
           }
           else if(i%2==1)
           {
               cout<<b<<" ";
               b+=2;
           }
           if(b==n-2)
            break;

       }
    if(n%2==1)
    {
        cout<<n-1<<" "<<n<<" "<<n-2;
    }
       cout<<endl;
            }
    }

}


