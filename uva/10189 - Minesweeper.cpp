

#include<bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
   int n,m;

   while(cin>>n>>m)

   {
   	if(n==0 && m==0)
   	return 0;
   	char arr[n][m]; int res[n][m]={0};
   	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='*')
				res[i][j]=-5;
			else
			{
				res[i][j]=res[i][j];
			}
			cout<<res[i][j]<<"  ";
		}
		cout<<endl;
	}

   }
}

