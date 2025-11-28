#include <stdio.h>
int main(){
  int menu;
  printf("Enter your value according to menu : \n");
  printf("1. Age Check for vote.\n");
  printf("2. oddEven value Check : ");
  scanf("%d",&menu);

  switch (menu)
  {
  case 1:
    printf("\n=======================\n");
    printf("-----------Age Check ------\n");

    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
      if(age >= 18){
        printf("You are eligible for vote. %d",age);
      }
      else{
        printf("You are not eligible for vote. %d",age);
      }
    break;
  
  case 2:
    printf("\n=======================\n");
    printf("-----------Odd Even Check ------\n");

    int num;
    printf("Enter your number : ");
    scanf("%d",&num);

    if(num%2 == 0){
      printf("Your number is even %d",num);
    }
    else{
      printf("Your number is odd %d",num);
    }
      break;
    default:
      printf("invalid menu number 😡");
      break;
  }
  return 0;
}