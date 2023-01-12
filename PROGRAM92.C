//Q-92check weather the matrix is symmetric or not

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
            b[i][j]=a[j][i];
        }
        printf("\n");
    }

   int c=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==b[i][j])
            {
               c++;
            
            }
            

        }
    }
    if(c==9)
    {
        printf("symmetric matrix ");
    }
    else{
        printf("Not symmetric matrix");
    }

    
}