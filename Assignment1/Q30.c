#include<stdio.h>
   
   int main () {
   int P,T,R;

   printf("Enter Principal Amount :\n");
   scanf("%d",&P);

   printf("Enter Rate of Interest  :\n");
   scanf("%d",&R);

   printf("Enter Time Period in Year  :\n");
   scanf("%d",&T);

   printf("Simple Interest Is : %f\n " ,(float)(P*R*T)/100);


  return 0; }