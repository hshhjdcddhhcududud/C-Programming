
   #include<stdio.h>
  int main () {

   int m;
   printf("Enter Days :\n");
   scanf("%d",&m);

   printf("Year  Is : %d\n " , m/365);
   printf("Week  Is : %d\n " , (m%365)/7);
  printf("Days  Is : %d\n " , (m%365)%7);

  return 0; }