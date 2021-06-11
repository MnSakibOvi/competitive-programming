#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst, i;
    int a , b, ab, abs, x;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d%d", &a, &b);
        ab = a * b;
        if(a==1 || b==1)    abs = ab;
        else if(a==2 || b==2)
        {
            if(a==2) x = b;
            else     x = a;
            if(x%4 == 1)      abs = x+1;
            else if(x%4 == 2) abs = x+2;
            else if(x%4 == 3) abs = x+1;
            else if(x%4 == 0) abs = x;
        }
        else if(ab%2 == 0) abs = ab/2;
        else abs = (ab/2)+1;
       cout<<"Case "<<i<<": "<<abs<<endl;
    }
    return 0;
}


