#include <stdio.h>
#include <string.h>

int main() {
    // Input the string
    char S[100001];
    scanf("%s", S);

    // Define the string containing vowels
    char vowels[] = "aeiou";

    // Count consonants
    int consonants = 0;
    for (int i = 0; i < strlen(S); i++) {
        if (strchr(vowels, S[i]) == '\0') 
        {
            consonants++;
        }
    }

    // Output the count of consonants
    printf("%d\n", consonants);

    return 0;
}
