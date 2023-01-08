//question 17-:calculate simple interest

#include <stdio.h>

int main()
{
   float principal ,rate, timee;
   printf("enter principal value\n");
   scanf("%f",&principal);
   printf("enter rate\n");
   scanf("%f",&rate);
   printf("enter time\n");
   scanf("%f",&timee);
   printf("simple interest is=%f",(principal*rate*timee)/100);
}
