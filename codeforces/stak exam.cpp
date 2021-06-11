#include<bits/stdc++.h>
using namespace std;

int solve( stack<int> a, stack<int> b)
{

    int d;
    stack<int> newstack;
    scanf("%d",d);

    for(int i=1; i<=d; i++)
    {
        int x;
     scanf("%d",x);
        newstack.push(x);
    }

    while(!newstack.empty())
    {
        printf("  %d", newstack.top());
        newstack.pop();
    }
}


int main()
{
    stack<int> mystack;
    stack<int> mystack2;

    mystack.push(3);
    mystack.push(2);
    mystack.push(1);
    while (!mystack.empty())
    {
       printf("  %d", mystack.top());
        mystack.pop();
    }
    printf("\n");

    mystack2.push(13);
    mystack2.push(12);
    mystack2.push(11);
    while (!mystack2.empty())
    {
        printf("  %d", mystack.top());
        mystack2.pop();
    }
   printf("\n");
    solve(mystack, mystack2);
}
