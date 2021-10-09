#include <stdio.h>


int main() {
    
   int x1,x2,y1,y2;
   
   printf("Enter X1 Point\n");
   scanf("%d",&x1);
   
   printf("Enter X2 Point\n");
   scanf("%d",&x2);
   
   printf("Enter Y1 Point\n");
   scanf("%d",&y1);
   
   printf("Enter Y2 Point\n");
   scanf("%d",&y2);
   
   printf("Slope Between Two Points Is : %f\n" , (float)(y2-y1)/(x2-x1));
   
    return 0;

}