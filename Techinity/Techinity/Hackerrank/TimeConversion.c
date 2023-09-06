#include <stdio.h>

void timeConversion(char s[]) {
    int hh, mm, ss;
    char ampm[3];

    // Extract hours,minutes,seconds,and AM/PM from the input string
    sscanf(s, "%d:%d:%d%s", &hh, &mm, &ss, ampm);

    // Convert 12-hour format to 24-hour format
    if (strcmp(ampm, "PM") == 0 && hh != 12) {
        hh += 12;
    } else if (strcmp(ampm, "AM") == 0 && hh == 12) {
        hh = 0;
    }

    // Output the result in 24-hour format with leading zeros
    printf("%02d:%02d:%02d\n", hh, mm, ss);
}

int main() {
    char s[11];  // Assuming the input time format is hh:mm:ssAM or hh:mm:ssPM
    scanf("%s", s);

    timeConversion(s);

    return 0;
}
