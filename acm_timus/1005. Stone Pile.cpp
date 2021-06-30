#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,ans=INT_MAX,an;
    int arr[21];
    int sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

  for(int i=0;i<(1<<n);i++)
  {
      int m=0;
      for(int j= 0;j<n;j++)
      {
          if(i&(1<<j))
            m+=arr[j];
      }
      an=abs(2*m-sum);
      ans=min(an,ans);
  }
  cout<<ans<<endl;
    return 0;
}
