#include <stdio.h>

int Findmax(int arr[],int size);

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

  int maxi = Findmax(array,size);
  printf("\n===================");
  printf("\nMax Value is : %d",maxi);
  printf("\n===================");
    return 0;
}

int Findmax(int arr[],int size){
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max){
          max = arr[i];
        }
    return max;
}