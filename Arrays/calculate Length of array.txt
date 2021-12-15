#include <stdio.h>

void main()
{
    int array[] = {5,4,3,2,1};

    long int size = sizeof(array);   // calculate size of array one element take 4 byte so 5 element take 20 byte
    int length = size/4;  
           
    printf("Length of Array Is -: %d",length);

}