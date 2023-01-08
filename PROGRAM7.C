//question 7- to print the length  and breadth of rectangle and print its perimeter


#include<stdio.h>
int main()

{
    int length,breadth;
    printf("enter length of rectangle=\n");
    scanf("%d",&length);
    printf("enter breadth of rectangle=\n");
    scanf("%d",&breadth);
    printf("perimeter of rectangle=%d\n",(2*(length+breadth)));
}