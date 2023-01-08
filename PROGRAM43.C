//question 43 - to find maximum betweeen two numbers
#include <stdio.h>
int main(){
    int a,b,n;
    scanf("%d%d",&a,&b);
    n=a>b;
    switch(n){
      case 1:printf("%d",a);
      break;
      case 0:printf("%d",b);
      break;
    }}
