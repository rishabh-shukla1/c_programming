//Q69  to add two numbers to the pointer 

#include<stdio.h>
int main()
{ 
    
     int *p;
     int *q;
     int a;
     int b;
     printf("enter the first value \n");
     scanf("%d",&a);
     p=&a;
     printf("enter the second value \n");
     scanf("%d",&b);
     q=&b;

     printf("sum =%d",*p+*q);
}