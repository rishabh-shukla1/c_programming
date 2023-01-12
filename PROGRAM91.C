//Q91-sum of the diagonals of the array

#include<stdio.h>

int main()
{    
    int a[3][3];
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    int s=0;
    int s1=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            
            }
            if(i+j==2)
            {
                      s1=s1+a[i][j];
            }

        }
    }
    printf("sum of diagonal 1= %d\n",s);
    printf("sum of diagonal 2= %d\n",s1);


    
}