#include<stdio.h>
  int main () {

   int r;
   printf("Enter Radius Of Circle :\n");
   scanf("%d",&r);

   printf("Diameter Is : %d\n " , 2*r);
   printf("Area Is : %0.2f\n " , 3.14*r*r);
   printf("Circumference Is : %0.2f\n " , 3.14*2*r);

  return 0; }