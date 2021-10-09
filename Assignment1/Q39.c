#include <stdio.h>


int main() {
    
    float salary;
    
    printf("Enter Salary\n");
    scanf("%f", &salary);
    
    float HRA  = salary*15/100;
    float TA = salary*20/100;

   printf("Population After two year\n%f" ,salary-(HRA+TA));
   
    return 0;

}