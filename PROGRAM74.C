//Q74- compare two strings weather they are equal otr not without using fuction of string 

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
  
  
  if(strlen(s)==strlen(s1))
  {
    for(int i=0;i<strlen(s);i++)
    {
      int y=s[i];
      int x=s1[i];
      if((x-y)==0)
      c=1;
        
      else
      { c=0;
        printf("the string is not equal");
        break;
      }

    }}
    else
    {
      printf("the string is not equal") ;
   }
   if(c==1)
   printf("the strings are equal");


  }