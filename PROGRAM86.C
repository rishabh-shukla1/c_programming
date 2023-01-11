//Q-86 enter the  array and print  the array usnig pointeR
#include<stdio.h>
int main()
{
    int a[5];
    int *p=a;
    printf("enter five integers");
    for(int i=0;i<5;i++)
    {
        scanf("%p",&*(p+i));

    }
    for(int i=0;i<5;i++)
    {
        printf("%d",*(p+i));
    }
}