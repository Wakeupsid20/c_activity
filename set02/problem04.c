#include <stdio.h>


int is_composite(int number) {
    if (number < 4)
        return 0; 

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0)
            return 1; 
    }
    return 0;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int composite_sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(numbers[i])) {
            composite_sum += numbers[i];
        }
    }

    printf("Sum of composite numbers in the array: %d\n", composite_sum);

    return 0;
}
