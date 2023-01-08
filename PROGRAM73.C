//Q73= concatinate two strings without using the string fuction 

#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  char s1[10];
  char s3[20];
  printf("Enter the string \n");
  scanf("%s",s);
  printf("Enter the second string \n");
  scanf("%s",s1);
  int c=0;
  
  
  for(int i=0;s[i];i++)
  {
    s3[i]=s[i];

  
    s3[strlen(s)+i]=s1[i];
  }
  
  printf("%s",s3);
  
}