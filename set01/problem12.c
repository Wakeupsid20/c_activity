#include <stdio.h>


typedef struct {
    float real;
    float imaginary;
} Complex;


Complex addComplex(Complex num1, Complex num2) {
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

int main() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);

    Complex numbers[n], sum;

   
    printf("Enter %d complex numbers (real and imaginary parts separated by a space):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter real and imaginary part for number %d: ", i + 1);
        scanf("%f %f", &numbers[i].real, &numbers[i].imaginary);
    }

  
    sum.real = 0;
    sum.imaginary = 0;
    for (int i = 0; i < n; i++) {
        sum = addComplex(sum, numbers[i]);
    }

 
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
