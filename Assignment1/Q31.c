#include <stdio.h>
#include <math.h>

int main() {
    
    // P is Principal or Invested Amount
    // T is time period for which the money is invested
    // R  is rate of interest
    // n is number of times interest is compound per year
    
    int P,T,R,n ;
    
    printf("Enter Principal\n");
    scanf("%d",&P);
    
    printf("Enter Time in Year\n");
    scanf("%d",&T);
    
    printf("Enter Rate Of Interest\n");
    scanf("%d",&R);
    
    printf("Enter Number Of Times Interest in Year\n");
    scanf("%d",&n);
    
    // create for do some calculation
    float calc = (float)(n*1 + R)/n ;
    printf("%f\n",calc);
    
    // calculate power
    float power = pow(calc,n*T) ;
    printf("%f\n",power);
    
    float CI = P*power ;
    
    printf("%f",CI);
    
    
    return 0;
}