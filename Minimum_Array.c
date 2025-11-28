#include <stdio.h>

int Findmin(int arr[],int size);

int main(){
  int size;
  printf("Enter size : ");
  scanf("%d",&size);

  int array[size];

  // input value for array :
  for(int i = 0 ; i < size ; i++){

    int ele;
    printf("Enter a number : ");
    scanf("%d",&ele);
    array[i] = ele;
  }

  printf("\n===================\n");
  // output value for array :
  for(int i = 0 ; i < size ; i++){
    printf("%d = %d\n",i,array[i]);
  }

  int mini = Findmin(array,size);
  printf("\n===================");
  printf("\nMin Value is : %d",mini);
  printf("\n===================");
    return 0;
}

int Findmin(int arr[],int size){
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min){
          min = arr[i];
        }
    return min;
}