#include<stdio.h>
  int main () {

   int m;
   printf("Enter Seconds :\n");
   scanf("%d",&m);

   printf("Hours  Is : %d\n" , m/3600);
   printf("Minutes  Is : %d\n" , (m%3600)/60);
  printf("Seconds  Is : %d\n " , (m%3600)%60);

  return 0; }