#include <stdio.h>


int main() {
    
    int population = 30000;
    
   // Population Increase in 1 year
   int first = 30000*20/100;
   
   // Population Increase in 2 year
   int second = 30000*30/100;
    
   printf("Population After two year\n%d" ,population+first+second);
   
    return 0;

}