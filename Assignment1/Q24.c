 #include<stdio.h>
   #include<math.h>
   
   int main () {

   int number,power;

   printf("Enter Number :\n");
   scanf("%d",&number);

    printf("Enter Power :\n");
   scanf("%d",&power);

   int c = pow(number,power);
   printf("Your Answer is : %d\n " ,c);


  return 0; }

