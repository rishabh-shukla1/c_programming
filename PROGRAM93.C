// to print upper triangle of a  2 dimentional array

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
           if(j>=i)
           printf("%d",a[i][j]);
           else
           printf(" ");
        }
        printf("\n");
    }

   
    
}