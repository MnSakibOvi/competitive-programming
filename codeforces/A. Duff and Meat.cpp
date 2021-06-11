/// *********************************************** T
/// O *                                           * A
/// O *    Solved By : mn_sakib_ovi(DIU)          * S
/// v *      Be Positive,be Happy.                * I
/// I *                                           * N
/// *********************************************** N

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arra[n],arrp[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arra[i]>>arrp[i];
    }
    int sum,k;
    sum=sum=arra[0]*arrp[0];
    k=arrp[0];
    for(int j=1;j<n;j++)
    {
    	// cout<<sum<<endl;

    	if(arrp[j]<=k)
	{
		k=arrp[j];
	}
		sum=sum+(arra[j]*k);


    }
    cout<<sum<<endl;
}

