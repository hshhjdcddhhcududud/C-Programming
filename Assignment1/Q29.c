  #include<stdio.h>
   
   int main () {
   int a,b,c,d,e;

   printf("Enter Subject 1 Marks  :\n");
   scanf("%d",&a);

   printf("Enter Subject 2 Marks  :\n");
   scanf("%d",&b);

   printf("Enter Subject 3 Marks  :\n");
   scanf("%d",&c);

   printf("Enter Subject 4 Marks  :\n");
   scanf("%d",&d);

   printf("Enter Subject 5 Marks  :\n");
   scanf("%d",&e);

   int total =  a+b+c+d+e;

   printf("Total Marks : %d\n" ,total);
   printf("Average Marks : %0.2f\n " ,(float)total/5);
   printf("Percentage Is : %0.2f\n " ,(float)total*100/500);

  return 0; }