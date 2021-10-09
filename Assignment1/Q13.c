#include<stdio.h>
 #include<math.h>

  int main() {
   
    int side;

    printf("Enter Radius Of Sphere : \n") ;
    scanf("%d", &side);

   printf("Volume is : %0.3f", 4*(3.14*side*side*side)/3) ;     
 
    return 0;  }