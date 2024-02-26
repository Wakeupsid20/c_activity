#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main() {
    int n = input_number();
    int result = is_prime(n);
    output(n, result);
    return 0;
}

int input_number() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    return n;
}

int is_prime(int n) {
    int flag = 0;
    if (n == 0 || n == 1)
        flag = 1;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    return flag;
}

void output(int n, int result) {
    if (result == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
