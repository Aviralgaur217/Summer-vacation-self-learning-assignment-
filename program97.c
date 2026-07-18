
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[20][50], temp[50];
    int i = 0, j = 0, k = 0, n = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Split sentence into words
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            words[n][j++] = str[i];
        } else {
            words[n][j] = '\0';
            n++;
            j = 0;
        }
        i++;
    }
    words[n][j] = '\0';
    n++;

    // Sort words by length
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}