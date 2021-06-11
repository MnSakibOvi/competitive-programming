#include<stdio.h>
int main()
{
    int array[3][3],array1[3][3],i,j,sum[3][3];
    printf("enter your first matrix");
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
        scanf("%d",&array[i][j]);
            }
    }
    printf("enter your secound matrix");
     for(i=0;i<3;i++){
            for(j=0;j<3;j++){
        scanf("%d",&array1[i][j]);
            }
    }
    printf("sum =\n");
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
    sum[i][j]=array[i][j]+array1[i][j];

         printf("sum[%d][%d] = %d\n",i,j,sum[i][j]);

            }
    }


}
