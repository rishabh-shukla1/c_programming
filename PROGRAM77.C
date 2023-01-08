//Q77- write a c program to toggle case of each charaecter of string
//(toggle)means to convert upper into lower and vice versa

#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  
  printf("Enter the string \n");
  scanf("%s",s);


  for(int i=0;i<s[i];i++)
  {
    int y=s[i];
    if(y>=65&&y<=90)
    {
     y=y+32;
     printf("%c",y);
    }
    else{
      y=y-32;
      printf("%c",y);
    }

     

  }
  
  
}