

   #include<stdio.h>

   int main ()

{  
    int X,Y,temp;
    
    printf("Enter X :\n");
    scanf("%d",&X);

    printf("Enter Y:\n");
    scanf("%d",&Y);

    temp = X;
    X = Y;
    Y = temp;

    printf("X After Swap : %d\n",X);
    printf("Y After Swap : %d",Y);

    return 0 ;
  }