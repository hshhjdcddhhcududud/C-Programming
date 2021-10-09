#include<stdio.h>
  int main () {

   int m;
   printf("Enter Days :\n");
   scanf("%d",&m);

   printf("Year  Is : %d\n" , m/365);
   printf("Month  Is : %d\n" , (m%365)/30);
  printf("Days  Is : %d\n " , (m%365)%30);

  return 0; }