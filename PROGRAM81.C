//Q81: PATTERN
//6
//6 6 6 6 6 6 6 6 6 6 6 
//6 5 5 5 5 5 5 5 5 5 6 
//6 5 4 4 4 4 4 4 4 5 6 
//6 5 4 3 3 3 3 3 4 5 6 
//6 5 4 3 2 2 2 3 4 5 6 
//6 5 4 3 2 1 2 3 4 5 6 
//6 5 4 3 2 2 2 3 4 5 6 
//6 5 4 3 3 3 3 3 4 5 6 
//6 5 4 4 4 4 4 4 4 5 6 
//6 5 5 5 5 5 5 5 5 5 6 
//6 6 6 6 6 6 6 6 6 6 6

#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
   int  size=2*n-1;
  int arr[size][size];
  
  	for(int i=0; i<n;i++)
  	{
      for(int row=i; row<size-i; row++)
  	{
          for(int col=i; col<size-i; col++)
          {
            arr[row][col] = n-i;
          }
  	}
  	}
            
            
 for(int row=0; row<size; row++)
 {
    for(int col=0; col<size; col++)
    {
      printf("%d ",arr[row][col]);
    }
    printf("\n");
 }
    return 0;
}
