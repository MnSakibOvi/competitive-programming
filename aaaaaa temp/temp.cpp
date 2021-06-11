//#include<bits/stdc++.h>
//#define ll long long int
//#define FastIO           ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
//using namespace std;
//
//int main()
//{
//    FastIO ;
//    int t;
//    cin>>t;
//    for(int cas=1;cas<=t;cas++)
//    {
//
//
//    int n;
//    cin>>n;
//    int ar[n];
//    ll sum=0;
//    for(int i=0; i<n; i++)
//    {
//        cin>>ar[i];
//        if(ar[i]>0)sum+=ar[i];
//    }
//
//    int low=0,high=n-1;
//
//    while(ar[low]<0)low++;
//    while(ar[high]<0)high--;
//    int cnt=0;
//    while(low<=high)
//    {
//        if(ar[low]<0)
//        {
//            while(ar[low]<0)low++;
//            cnt++;
//        }
//        else if(ar[high]<0)
//        {
//            while(ar[high]<0)high--;
//            cnt++;
//        }
//        if(ar[low]>=0)low++;
//        else if(ar[high]>=0)high--;
//
//    }
//    cout<<"Case "<<cas<<": ";
//    cout<<sum<<" "<<cnt<<endl;
//    }
//}
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {

            if(arr[i]==arr[i+1])
            {
              printf("True\n");
              return 0;
            }

    }


    printf("False\n");
              return 0;



}
