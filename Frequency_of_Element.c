#include <stdio.h>

int Findfrequency(int arr[], int size, int target);

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int array[size];

    // Input values for array
    for (int i = 0; i < size; i++) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }

    printf("\n===================\n");
    // Display array
    for (int i = 0; i < size; i++) {
        printf("%d = %d\n", i, array[i]);
    }

    int target;
    printf("\nEnter number to find frequency: ");
    scanf("%d", &target);

    int frequency = Findfrequency(array, size, target);
    printf("\n===================\n");
    printf("%d occurs %d times\n", target, frequency);
    printf("===================\n");

    return 0;
}

int Findfrequency(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}