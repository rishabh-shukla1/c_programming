//question 18-: to find compound interest

#include <stdio.h>
#include<math.h>

int main()
{
   float principal ,rate, timee;
   printf("enter principal value\n");
   scanf("%f",&principal);
   printf("enter rate\n");
   scanf("%f",&rate);
   printf("enter time\n");
   scanf("%f",&timee);
    double ci=principal*(pow((1+(rate/100)),timee));
    printf("compound interest=%f",ci);
}