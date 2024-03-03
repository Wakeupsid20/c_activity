#include <stdio.h>

int input_size() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int max_num = a[0];
    int max_index = 0;
    
    for (int i = 1; i < n; i++) {
        if (a[i] > max_num) {
            max_num = a[i];
            max_index = i;
        }
    }
    
    return max_index;
}

void output(int index) {
    printf("The index of the largest number in the array is %d\n", index);
}

int main() {
    int n = input_size();
    int a[n];
    input_array(n, a);
    int index = find_largest_index(n, a);
    output(index);
    
    return 0;
}
