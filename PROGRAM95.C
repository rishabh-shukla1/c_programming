//Q95 to print  thr border only of the 2 dimentional array

#include<stdio.h>

int main()
{    
    int a[3][3];
    int b[3][3];
    printf("enter 9 elements\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(i==0||j==0||i==2||j==2) 
          printf("%d",a[i][j]);
           else
           printf(" ");
        }
        printf("\n");
    }

   
    
}