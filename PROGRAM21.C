//question 21-to print the increment decrement

#include <stdio.h>
int main()
{   int i;

     printf("enter a integer\n");

     scanf("%d",&i);

     int x=i++;
     int y=++i;
     int z=i--;
     int k=--i;
     printf("x=%d\n",x);
     printf("y=%d\n",y);
     printf("z=%d\n",z);
     printf("k=%d",k);

     return 0;

}