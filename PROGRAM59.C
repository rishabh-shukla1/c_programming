//Q59 WRITE A PROGRAM RO PRINT THE SUM OF ALL array elements
#include <stdio.h>


int main()
{
  int a[5];
  int sum=0;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<5;i++)
  { 
   
   sum=sum+a[i];
  
  }
printf("sum=%d",sum);
    
    
}