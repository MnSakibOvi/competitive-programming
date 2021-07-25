

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n;
    int arr[n];
    vector<int>arr2;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
       {
        cin>>x;
        arr2.push_back(x);
       }


    sort(arr,arr+n, greater<int>());
    sort(arr2.begin(), arr2.end(), greater <>());
    int k=(n-(n/4));
    long long int sum=0,sum2=0;
    for(int i=0; i<k; i++)
    {
        sum+=arr[i];
        sum2+=arr2[i];
    }
    int cnt=n,cl=k-1,cl2=k;
//while(sum<sum2)
//{
//    sum+=100;
//    arr2.push_back(0);
//
//        sum2+=arr2[cl2];
//    cl2++;
//    cnt++;
//
//
//
//    int now=(cnt-(cnt/4));
//    if(now==k)
//    {
//
//       sum2-=arr2[cl2-1];
//       cl2--;
//       if(cl<0)
//        sum-=100;
//       else
//       {
//         sum-=arr[cl];
//         cl--;
//       }
//
//    }
//     k=now;
//
//}
int id1=k-1, id2=k;

        while(sum<sum2)
        {
            sum+=100;
            arr2.push_back(0);
            sum2+=arr2[id2];
            id2++;

            cnt++;
            int now=cnt-(cnt/4);
            if(now==k)
            {
               sum2-=arr2[id2-1];
                id2--;

                if(id1<0) sum-=100;
                else sum-=arr[id1];
                id1--;
            }

           k  =now;
        }
//cout<<sum<<" <-> "<<sum2<<endl;
//cout<<"------>"<<cnt<<endl;
    cout<<cnt-n<<endl;


}
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}


