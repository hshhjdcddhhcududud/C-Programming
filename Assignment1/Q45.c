#include <stdio.h>
#include <math.h>


int main() {
    
  int rupees;
   
  printf("Enter Amount :\n");
  scanf("%d",&rupees);

// calculation of notes
  int notes_2000 = rupees/2000 ;
  int notes_500 = (rupees%2000)/500 ;
  int notes_100 = ((rupees%2000)%500)/100 ;
  int notes_50 = (((rupees%2000)%500)%100)/50 ;
  int notes_10 = ((((rupees%2000)%500)%100)%50)/10 ;
  int notes_5 = (((((rupees%2000)%500)%100)%50)%10)/5 ;
  
  printf("Number Of 2000 Rupees Notes : %d\n",notes_2000);
  printf("Number Of 500 Rupees Notes : %d\n",notes_500);
  printf("Number Of 100 Rupees Notes : %d\n",notes_100);
  printf("Number Of 50 Rupees Notes : %d\n",notes_50);
  printf("Number Of 10 Rupees Notes : %d\n",notes_10);
  printf("Number Of 5 Rupees Notes : %d\n",notes_5);

  return 0;

}