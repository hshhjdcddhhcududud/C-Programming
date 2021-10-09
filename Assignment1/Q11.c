
 #include<stdio.h>
 #include<math.h>

  int main() {
   
    float a,b,c;
    float semi_permimter; 

    printf("Enter Side A : \n") ;
    scanf("%f", &a);

   printf("Enter Side B : \n") ;
    scanf("%f", &b);

    printf("Enter Side C : \n") ;
    scanf("%f", &c);

   semi_permimter = (a+b+c)/2 ;
   float s = semi_permimter;
   
  
   float area = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area is : %0.4f" , area) ;     
  

    return 0;  }