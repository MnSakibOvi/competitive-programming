#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,ans;
    int arr[22];
    int sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
int sum1=0;
   for(int i=0;i<n;i++)
   {
       int mn=INT_MAX,k=0;
       for(int j=0;j<n;j++)
       {
           if(arr[j]>=0)
           {
             int g=abs((2*arr[i])-sum);
             if(g<mn)
             {
                 mn=g;
                 k=j;


             }
           }
       }
       sum-=arr[k];
       sum1+=arr[k];
       arr[k]=-1;
       cout<<sum<<" "<<sum1<<endl;
   }
   ans=abs(sum-sum1);

    printf("%d\n",ans);
    return 0;
}
