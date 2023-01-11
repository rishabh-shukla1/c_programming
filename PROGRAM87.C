// write a program to copy the elements of one array to another array by using pointers
#include<stdio.h>
int main()
{
    int a[5];
    int *p=a;
    int b[5];
    int *q=b;
    printf("enter five integers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%p",&*(p+i));

    }
    for(int i=0;i<5;i++)
    {
        *(q+i)=*(a+i);

    }
    for(int j=0;j<5;j++)
    {
        printf("%d",*(q+j));
    }
}