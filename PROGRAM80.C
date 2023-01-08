//Q80-  wrie a program to count the number  of words in the string


#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
  
  printf("Enter the string  \n");
  scanf("%[^\n]s",s);

  int a=0;
  
  

  for(int i=0;i<s[i];i++)
  {
    char ch=s[i];
    if(ch==' ')
    a++;
   

  }
  printf("=%d\n",a+1);

  
  
  
}