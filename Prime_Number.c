#include <stdio.h>

int IsPrime(int num);
int main(){

  int num;
  printf("Enter Your Number : ");
  scanf("%d",&num);

  int result = IsPrime(num);

  if(result == 0){
    printf("Number is not prime number.");
  }
  else{
    printf("Number is prime number.");
  }
}

int IsPrime(int num){
  if(num <= 2){
    return 0;
  }
  else{
    for(int i = 2 ; i < num ; i++){
      if(num%i == 0 ){
        return 0;
      }
    }
    return 1;
  }
}