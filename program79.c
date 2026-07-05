#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);  // simple input (not recommended in modern C, but used in exams)

    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}