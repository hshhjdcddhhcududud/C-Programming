#include <stdio.h>

void main()
{
    int size;                         // size variable store length of array which is enter by user
    int sum=0;                       //calculate sum 
    
    printf("Enter Size Of Array\n");
    scanf("%d",&size);
    
    int array[size];                 // array defined

    for(int i=0; i<size; i++)       // inserting values in array
    {
        printf("Enter %d Value\n" ,i+1);
        scanf("%d",&array[i]);
        sum = sum + array[i]; 
    }

    printf("Sum of Array Elements Is %d",sum);
    
}