//Q83 PATTERN
//1
//26
//3710
//481113
//59121415
#include<stdio.h>
int main()
{
  for(int i=1;i<=5;i++)
  {
    int d=0;
    int c=4;
    for(int j=1;j<=i;j++)
    {
      if(j==1)
      printf("%d",i);
      else
      {
        d=d+i+c;
       printf("%d",d);
       c--;
       d=d-i;
      }

    }
    printf("\n");

  }
}