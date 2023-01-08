//question 31- print the maximu of three numbers
#include<stdio.h>
int main()
{
    int n;
    int m;
    int k;
    int c=0;
       printf("enter  first number\n");
       scanf("%d",&n);
       printf("enter second number\n");
       scanf("%d",&m);
       printf("enter third number\n");
       scanf("%d",&k);
       if(n>m)
       c=n;
       if(m>n)
       c=m;
       if(k>c)
       c=k;

       printf("maximum =%d",c);


        

}