// write a program to  search an element in  array by using pointer
#include<stdio.h>
int main()
{   int n;
    int a[5];
    int *p=a;
    int c=0;
    printf("ENTER THE ELEMENT TO BE FOUNDED\n");
    scanf("%d",&n),
    
    
    printf("enter five integers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%p",&*(p+i));

    }
    for(int i=0;i<5;i++)
    {
        if(*(p+i)==n)
        {
            printf("element found");
            c=0;
            break;
        }
        else
        {
            c=1;
        }
        
    }
  if(c==1)
  printf("ELEMENT NOT FOUND");
}