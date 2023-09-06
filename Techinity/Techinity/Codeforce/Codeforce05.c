#include <stdio.h>

int main() {
    char situation[101];  // Assuming a maximum length of 100 characters
    scanf("%s", situation);

    int consecutive_count = 1;
    char prev_char = situation[0];
    int is_dangerous = 0;

    // Iterate through the string to check for consecutive ones or zeros
    for (int i = 1; situation[i] != '\0'; i++) {
        if (situation[i] == prev_char) {
            consecutive_count++;
        } else {
            consecutive_count = 1;
            prev_char = situation[i];
        }

        // Check if there are 7 consecutive ones or zeros
        if (consecutive_count >= 7) {
            is_dangerous = 1;
            break;
        }
    }

    if (is_dangerous) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
