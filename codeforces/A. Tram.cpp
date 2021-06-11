#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n],arr2[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i]>>arr2[i];
    }
    int c=arr2[0];
    for(i=0; i<(n-1); i++)
    {

        int a=(arr2[i]+arr2[i+1])-arr[i+1];

        arr2[i+1]=a;
        if(a==0)
            a=arr2[i];
        // cout<<a<<"    "<<endl;
        if(a>c)
            c=a;
//      if(arr2[n]==0)
//           break;
    }
    cout<<c;
}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,a=0,b=0,s=0,sum=0;
//    scanf("%d",&n);
//    while(n--)
//    {
//        scanf("%d %d",&a,&b);
//        sum = sum + (b-a);
//        if(sum > s)
//        {
//            s = sum;
//        }
//    }
//    printf("%d",s);
//}
