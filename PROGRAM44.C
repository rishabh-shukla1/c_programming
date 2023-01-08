//question 44- to find even or odd BY USING SWITCH
#include <stdio.h>
int main(){
    int a,n;
    scanf("%d",&a);
    n=a%2==0;
    switch(n){
      case 1:printf("even");
      break;
      case 0:printf("odd");
      break;
    }}