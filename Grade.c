#include <stdio.h>

int main(){

  float hindi,english,math,science,sst,total,tpm,percentage;

  printf("Enter your hindi number : ");
  scanf("%f",&hindi);

  printf("Enter your english number : ");
  scanf("%f",&english);

  printf("Enter your math number : ");
  scanf("%f",&math);

  printf("Enter your science number : ");
  scanf("%f",&science);

  printf("Enter your sst number : ");
  scanf("%f",&sst);

  total = hindi + english + science + math + sst;

  tpm = 500;

  percentage = (total / tpm )*100;

  if(percentage > 90 && percentage <= 100){
    printf("You have got A Grade => %.2f",percentage);
  }
  else if(percentage > 80 && percentage <= 89){
    printf("You have got B Grade => %.2f", percentage);
  }
  else if(percentage > 70 && percentage <= 79){
    printf("You have got C Grade => %.2f", percentage);
  }
  else if(percentage > 50 && percentage <= 69){
    printf("You have got D Grade => %.2f", percentage);
  }
  else{
    printf("You have got E Grade => %.2f", percentage);
  }

  return 0;
}