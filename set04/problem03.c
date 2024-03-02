#include <stdio.h>

void input_n_and_r(int *n, int *r) {
    printf("Enter the value of n: ");
    scanf("%d", n);
    printf("Enter the value of r: ");
    scanf("%d", r);
}

int nCr(int n, int r) {
    int result = 1;
    if (r > n - r) {
        r = n - r;
    }
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

void output(int n, int r, int result) {
    printf("For n = %d and r = %d, nCr = %d\n", n, r, result);
}

int main() {
    int n, r;
    input_n_and_r(&n, &r);
    int result = nCr(n, r);
    output(n, r, result);
    return 0;
}
