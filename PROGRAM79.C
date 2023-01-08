//Q79- write a program  to count the  number of vowels and consonants in a string
#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
  
  printf("Enter the string in lower case \n");
  scanf("%s",s);
  int a=0;
  
  int r=0;

  

  for(int i=0;i<s[i];i++)
  {
    char ch=s[i];
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    a++;
    else
    r++;

  }
  printf("vowels=%d\n",a);

  printf("consonants=%d\n",r);
  
  
}