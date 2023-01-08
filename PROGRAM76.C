//Q76- write a program to convert upper case string to lower case

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
      printf("%c",s[i]);
    }

     

  }
  
  
}
  