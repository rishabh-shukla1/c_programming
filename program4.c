//question 4-:write a program to convert days into years,weaks,days

#include<stdio.h>
int main()
{
    int n;
    printf("enter no of days=%d\n",n);
    scanf("%d",&n);
    int year=n/365;
    int d=n%365;
    int weaks=d/7;
    int days=d%7;
    
    printf(" no of years=%d\n",year);
    printf("no of  weaks=%d\n",weaks);
    printf("no of remianing days=%d\n",days);

}