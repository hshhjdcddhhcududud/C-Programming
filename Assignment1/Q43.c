#include <stdio.h>
#include <math.h>


int main() {
    
   int intial=30,acceleration=5,distance=70;
   
  //final velocity
  float v = sqrt((float)(intial*intial)+(2*acceleration*distance));
  printf("Final Velocity Is : %f",v);
   
    return 0;

}