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
    int num;
    printf("Enter a number to check if it's composite: ");
    scanf("%d", &num);

    if (is_composite(num))
        printf("%d is a composite number.\n", num);
    else
        printf("%d is not a composite number.\n", num);

    return 0;
}

