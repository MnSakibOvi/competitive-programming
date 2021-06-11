

#include<bits/stdc++.h>
using namespace std;




int main()
{

	//  ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

	int n,t=0;
	cin>>n;
	while(n!=0)
	{

		if(t!=0)
			cout<<endl;
			t++;

      int v[n];

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v ,v+n);

	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";

		cin>>n;



	}
}



