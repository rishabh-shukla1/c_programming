// write a program to  acess two dimentional array using pointers

#include<stdio.h>
int main()
{   
    
    int p[3][3];
    int *a[3][3];
    
   
    
    printf("enter 9 integers\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%p\n",&p[i][j]);
        }

    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           a[i][j]=&p[i][j];
        }
       
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

           printf("%d",*a[i][j]); 

        }
        printf("\n");
    }

   
  
}