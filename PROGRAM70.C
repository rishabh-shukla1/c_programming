//Q 70- to  swap two numbwers
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
     int temp=*p;
     *p=*q;
     *q=temp;

     printf("swapped values %d %d",*p,*q);
}