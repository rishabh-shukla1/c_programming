// write a program to reverse the array by using pointer
#include<stdio.h>
int main()
{
    int a[5];
    int *p=a;
    
    printf("enter five integers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%p",&*(p+i));

    }
    for(int i=0;i<3;i++)
    {
        int temp=*(p+i);
        *(p+i)=*(p+(4-i));
        *(p+4-i)=temp;

    }
    for(int j=0;j<5;j++)
    {
        printf("%d\n",*(p+j));
    }
}