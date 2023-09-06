#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char word[101];  // Assuming a maximum word length of 100 characters

    for (int i = 0; i < n; i++) {
        scanf("%s", word);

        int len = 0;
        while (word[len] != '\0') {
            len++;
        }

        if (len > 10) {
            // Replace the word with abbreviation
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        } else {
            // Word is not too long, print it as is
            printf("%s\n", word);
        }
    }

    return 0;
}
