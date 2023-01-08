//Q75 -write a program to convert lower case string to upper case

#include<stdio.h>

int main()
{
  char s[10];
  
  printf("Enter the string \n");
  scanf("%s",s);


  for(int i=0;i<s[i];i++)
  {
    int y=s[i];
    if(y>=97&&y<=122)
    {
     y=y-32;
     printf("%c",y);
    }
    else{
      printf("%c",s[i]);
    }

     

  }
  
  
}