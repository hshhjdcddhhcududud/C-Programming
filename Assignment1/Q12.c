 #include<stdio.h>

  int main() {
   
    int base_a,base_b,height;

    printf("Enter Base A : \n") ;
    scanf("%d", &base_a);

    printf("Enter Base B : \n") ;
    scanf("%d", &base_b);

   printf("Enter Height: \n") ;
   scanf("%d", &height);

   printf("Area Of Trapezium Is : %f", (float)((base_a+base_b)*height)/2) ;     
 
    return 0;  }