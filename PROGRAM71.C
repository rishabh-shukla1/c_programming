//Q71- to caluculate  the length of the string

#include<stdio.h>
int main()
{
  char s[10];
  printf("Enter the string \n");
  scanf("%s",s);
  int c=0;
  
  for(int i=0;s[i];i++)
  {
    c++;
  }
  printf("%d",c);
}