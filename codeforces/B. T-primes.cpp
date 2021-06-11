#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,k=0,h=1;
    long long int n,a,b;

    scanf("%d",&k);
    for(i=0; i<k; i++)
    {
        scanf("%lld",&n);
        if(sqrt(n)!=(int)sqrt(n))
        {
            printf("NO\n");
            continue;
        }
        if(n==1){
            printf("NO\n");
            continue;
        }
        a = sqrt(n);
        b = sqrt(a) +1;
        for(int j=2; j<b; j++)
        {
            if(n % j == 0)
            {
                printf("NO\n");
                h=0;
                break;
            }
        }
        if(h==1)
        printf("YES\n");
        h=1;
    }
    return 0;
}
