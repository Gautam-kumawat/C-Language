#include <stdio.h>

float average(int salary[],int size);

int main(){

  int size;
  printf("Enter a value for your array size : ");
  scanf("%d",&size);

  int salary[size];

  // input value for array :
  for(int i = 0 ; i < size ; i++){

    int ele;
    printf("Enter a salary : ");
    scanf("%d",&ele);
    salary[i] = ele;
  }

  printf("\n===================\n");
  // output value for array :
  for(int i = 0 ; i < size ; i++){
    printf("%d = %d,\n",i,salary[i]);
  }

  float myAvg = average(salary,size);
  printf("\n===================");
  printf("\nMy Avg is of : %f",myAvg);
  printf("\n===================");

  return 0;
}

float average(int salary[],int size){

  int sumOfSalary = 0;

  for(int i = 0 ; i < size ; i++) {
    sumOfSalary += salary[i];
  }

  float avg = sumOfSalary / size;
  
  return avg;

}