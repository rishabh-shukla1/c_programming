//question-16:enter marks in 5 subjects and calculte total average and percentage
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    printf("marks of 1st subject\n");
    scanf("%d",&s1);
    printf("marks of 2nd subject\n");
    scanf("%d",&s2);
    printf("marks of 3rd subject\n");
    scanf("%d",&s3);
    printf("marks of 4th subject\n");
    scanf("%d",&s4);
    printf("marks of 5th subject\n");
    scanf("%d",&s5);
    int total=s1+s2+s3+s4+s5;
    double average=total/5;
      float per=(total/5);
     printf("total=%d\n",total);
     printf("average=%f\n",average);
     printf("percentage=%f\n",per);
    
}