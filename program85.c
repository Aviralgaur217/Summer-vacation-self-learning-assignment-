#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string
    for(i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    // Compare original and reversed strings
    if(strcmp(str, rev) == 0)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is Not a Palindrome.\n");

    return 0;
}