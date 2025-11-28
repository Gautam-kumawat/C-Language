#include <stdio.h>

int Findeven(int arr[],int size,int newarry[]);

int main(){
  int size;
  printf("Enter size : ");
  scanf("%d",&size);

  int array[size];

  // input value for array :
  for(int i = 0 ; i < size ; i++){
    printf("Enter a number : ");
    scanf("%d", &array[i]);
  }

  printf("\n===================\n");
  // output value for array :
  for(int i = 0 ; i < size ; i++){
    printf("%d = %d\n",i,array[i]);
  }
  int newarry[size];
  int evennum = Findeven(array,size,newarry);
  printf("\n===================");
  printf("\nTotal Even Numbers is : %d\n",evennum);
  printf("Even Values: ");
    for (int i = 0; i < evennum; i++) {
        printf("%d ", newarry[i]);
    }
  printf("\n===================");
    return 0;
}

int Findeven(int arr[],int size,int newarry[]){
    int even = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] % 2 == 0){
            newarry[even]=arr[i];
          even++;
        }
    return even;
}