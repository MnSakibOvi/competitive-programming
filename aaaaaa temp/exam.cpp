#include<bits/stdc++.h>
#include <map>
using namespace std;
bool cheack(int n,int s)
{
if(n==s)
    return false;
else
    return true;
}

int main()
{

    int n;
 scanf("%d",&n);
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
        int x=arr[i];
        mp[x]++;
    }
  if(cheack(n,mp.size()))
    printf("True/n");
  else
    printf("False/n");




}

