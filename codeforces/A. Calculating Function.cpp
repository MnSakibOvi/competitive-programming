#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,i,c,sum=0;
 cin>>a;
 if(a%2==0)
 c=a/2;
 else
    c=((a/2)+1)*-1;

cout<<c;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    long long int n, res;
//    scanf("%lld", &n);
//    res = ceil(n / 2.0);
//    if(n % 2 == 1)
//        res *= -1;
//    printf("%lld", res);
//    return 0;
//}

////#include<bits/stdc++.h>
////using namespace std;
////
////int main()
////{
////    long long int n;
////    cin>>n;
////    long long int odd,even;
////    even = odd = n/2;
////    if(n % 2 != 0)
////        odd++;
////    cout<< - (odd*odd) + (even*(even + 1));
////    return 0;
////}
