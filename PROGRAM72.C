//Q 72- to cpy one string into another string

#include<stdio.h>
int main()
{
  char s[10];
  char s1[10];
  printf("Enter the string \n");
  scanf("%s",s);
 
  
  for(int i=0;s[i];i++)
  {
    s1[i]=s[i];
  }
  printf("%s",s1);
}