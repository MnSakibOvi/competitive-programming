#include<bits/stdc++.h>
using namespace std;


int main()
{



  int n;
  cin>>n;
  int arr[n+1],low,up=n,flag1=0,flag2=0;

  for(int i=1;i<=n;i++)
  cin>>arr[i];

  arr[0]=0;
  if(n==1)
  {
      cout<<"yes"<<endl;
  cout<<"1"<<" "<<"1"<<endl;
  return 0;
  }
    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]>arr[i+1] && flag1==0)
        {
            low=i;
            flag1=1;
            flag2=1;
        }
        if(arr[i]<arr[i+1] && flag2==1)
        {
            up=i;
            break;
        }
    }
  //cout<<low<<" "<<up<<endl;

  if(flag1==0 && arr[1]<arr[n])
   {
  cout<<"yes"<<endl;
  cout<<"1"<<" "<<"1"<<endl;
   }
   else if(low==1 && up==n)
    {
  cout<<"yes"<<endl;
  cout<<"1"<<" "<<n<<endl;
   }

   else if( arr[up]>arr[low-1] && arr[low]<arr[up+1] || arr[up]>arr[low-1] && up==n)
   {
       int g=arr[up+1];
       sort(arr+(up+1), arr + n+1);
       if(g!=arr[up+1])
        cout<<"no"<<endl;
       else
       {


       cout<<"yes"<<endl;
       cout<<low<<" "<<up<<endl;
       }
   }
   else
   {
       cout<<"no"<<endl;
   }




}
