#include <stdio.h>

void main()
{
    int size;
    printf("Enter Length Of Array\n");
    scanf("%d",&size);
    
    int array[size];        // Array Declared
    
    for(int i=0; i<size;i++)                   // inserting Value by this loop
    {
        printf("Enter %d Element\n",i+1);
        scanf("%d",&array[i]);
    }
    
    
    for(int i=size; i>0;i--)                   // Printing Reverse Of Loop
    {
        printf("%d,",array[i-1]);
    }
    
    
}