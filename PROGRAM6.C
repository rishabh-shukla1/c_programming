//Question 6-:write a c program to find the poewer of any number


#include<stdio.h>
#include<math.h>
int main ()
{
    int n1,n2;
    printf("enter first number \n",n1);
    scanf("%d",&n1); 
    printf("enter second number \n",n2);
    scanf("%d",&n2);
    printf("power is=%f\n",pow(n1,n2));
    return 0;
}