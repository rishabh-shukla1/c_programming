//question 9-:to enter distance in cm and convert it into kilometer and meter

#include <stdio.h>

int main()
{
    int len;
    printf("enter the lenght \n");
    scanf("%d",&len);
    int km=len/1000;
    int km1=len%1000;
     int m=len/100;
    int m2=len%100;
    
    
    
    printf("in meter=%d.%d\n",m,m2);
    printf("kilometer=%d.%d\n",km,km1);
    
    
}