#include <stdio.h>
int main()
{
   int count=1,i;
   while (count <= 10)
   {
       i=count%2;
       if(i==0)
	printf("%d \n", count);
	count++;
   }
   return 0;
}
