#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nCharacter Frequency:\n");

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        // Skip already counted characters
        if (str[i] == '*')
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '*';   // Mark duplicate
            }
        }

        if (str[i] != '\n')
            printf("%c = %d\n", str[i], count);
    }

    return 0;
}