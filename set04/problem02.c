#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction findSmallestFraction(Fraction f1, Fraction f2, Fraction f3) {
    int lcd = f1.den * f2.den * f3.den;
    
    int num1 = f1.num * (lcd / f1.den);
    int num2 = f2.num * (lcd / f2.den);
    int num3 = f3.num * (lcd / f3.den);
    
    if (num1 <= num2 && num1 <= num3) {
        return f1;
    } else if (num2 <= num1 && num2 <= num3) {
        return f2;
    } else {
        return f3;
    }
}

int main() {
    Fraction f1, f2, f3;
    
    printf("Enter the first fraction (numerator denominator): ");
    scanf("%d %d", &f1.num, &f1.den);
    
    printf("Enter the second fraction (numerator denominator): ");
    scanf("%d %d", &f2.num, &f2.den);
    
    printf("Enter the third fraction (numerator denominator): ");
    scanf("%d %d", &f3.num, &f3.den);
    
    Fraction smallestFraction = findSmallestFraction(f1, f2, f3);
    
    printf("The smallest of %d/%d, %d/%d, and %d/%d is %d/%d\n", f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, smallestFraction.num, smallestFraction.den);
    
    return 0;
}
