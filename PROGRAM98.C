//  TO PRINT THE AREA OF THE SQUARE NY USING THE FUCTION CONCEPT
#include<stdio.h>  
int square();  
void main()  
{  
    
    float area = square();  
    printf("The area of the square: %f\n",area);  
}  
int square()  
{  
    float side;  
    printf("Enter the length of the side in meters: ");  
    scanf("%f",&side);  
    return side * side;  
}  