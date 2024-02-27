#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b) {
    printf("Enter the string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    char* result = strstr(string, substring);
    if (result == NULL) {
        return -1;
    }
    return result - string;
}

void output(char *string, char *substring, int index) {
    printf("The index of '%s' in '%s' is %d\n", substring, string, index);
}

int main() {
    char string[100];
    char substring[100];
    int index;
    
    input_string(string, substring);
    index = sub_str_index(string, substring);
    output(string, substring, index);
    
    return 0;
}
