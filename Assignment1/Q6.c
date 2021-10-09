   #include<stdio.h>

   int main ()
   
 {  
    int divisor,dividend;
    
    printf("Enter Dividend:\n");
    scanf("%d",&dividend);

    printf("Enter Divisor:\n");
    scanf("%d",&divisor);

    printf("Quotient Is : %d\n",dividend/divisor);
    printf("Remainder Is : %d",dividend%divisor);

    return 0 ;
  }