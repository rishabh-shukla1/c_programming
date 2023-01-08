//question 29-  chek weather the number is leap year or not using conditional operator
#include<stdio.h>
int main()
{
    int n;
    
       printf("enter  first number\n");
       scanf("%d",&n);
      ((n%4==0&&n%100!=0)||(n%400==0))?printf("leap year"):printf("not leap year");

}