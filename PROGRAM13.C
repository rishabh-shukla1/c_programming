//question 13-:write a program to enter two angles of triangle and then  find the thor angle

#include <stdio.h>


int main()
{
    int a1,a2;
    printf("enter first angle\n");
    scanf("%d",&a1);
    printf("enter second angle\n");
    scanf("%d",&a2);
    int a3=180-(a1+a2);
    printf("third angle is =%d",a3);
}