//Q96- to chek weather it is spar matrix or not

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
    int c=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(a[i][j]==0)
          c++;
        }
        
    }
    if(c>3)
    {
        printf("Spar matrix");
    }
    else
    printf("NOT a spar matrix");

   
    
}