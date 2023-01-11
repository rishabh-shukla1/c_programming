// Q82 -swap the numbers using pointers

#include<stdio.h>
int main()
{
    int a,b;
   printf("ENTER FIRST NUMBER\n");
   scanf("%d",&a);
   printf("Enter second number");
   scanf("%d",&b);
   int *p=&a;
   int *q=&b;
   int temp=*p;
   *p=*q;
   *q=temp;
   printf("%d %d",*p,*q);


   
}