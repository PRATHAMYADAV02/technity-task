#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = 0;

    for (int i = 0; i < n; i++) {
        char operation[4];
        scanf("%s", operation);

        if (operation[1] == '+') {
            x++;
        } else if (operation[1] == '-') {
            x--;
        }
    }

    printf("%d\n", x);
    return 0;
}
