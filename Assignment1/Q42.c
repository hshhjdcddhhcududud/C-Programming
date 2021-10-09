#include <stdio.h>


int main() {
    
   float wavelength;
   
   printf("Enter Wavelength in m\n");
   scanf("%f",&wavelength);
 
   // speed of light
   int c = 300000000;
   

  printf("Frequency Is : %0.2f Hz\n" , (float)c/wavelength );
   
    return 0;

}