//question 30- to chek weather the number is a alphabet  or not using conditional operator
#include<stdio.h>
int main()
{
    char  n;
    
       printf("enter  a alphabet\n");
       scanf("%c",&n);
      int c=n;
     ( (n>=65&&n<=90)||(n>=97&&n<=122))?printf("it is an alphabet"):printf("it is not a alphabet");

}