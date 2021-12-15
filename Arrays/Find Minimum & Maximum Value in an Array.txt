#include <stdio.h>

void main()
{
    int size;                         // size variable store length of array which is enter by user
    int min,max;
    
    printf("Enter Size Of Array\n");
    scanf("%d",&size);
    
    int array[size];                 // array defined

    for(int i=0; i<size; i++)       // inserting values in array
    {
        printf("Enter %d Value\n" ,i+1);
        scanf("%d",&array[i]);
        
        if(i==0)
        {
            min = array[0];
            max = min;
        }
        
        else if(min>array[i])
        {
          min = array[i];
        }
        
        else if(max<array[i])
        {
          max = array[i];
        }
    }

    printf("Minimum Is %d\n",min);
    printf("Maximum Is %d\n",max);
    
}