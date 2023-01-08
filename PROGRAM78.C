//Q78 write a program  to find the number of special characers numbers , alphabets ,numbers
#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
  
  printf("Enter the string \n");
  scanf("%s",s);
  int a=0;
  int d=0;
  int r=0;

  for(int i=0;i<s[i];i++)
  {
    int y=s[i];
    
    if(y>=65&&y<=90||y>=97&&y<=122)
    a++;
    else if(y>=48&&y<=57)
    d++;
    else
    r++;

     

  }
  printf("alphabets=%d\n",a);
  printf("digits=%d\n",d);
  printf("special character=%d\n",r);
  
  
}