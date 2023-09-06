#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int advanced = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] > 0 && scores[i] >= scores[k - 1]) {
            advanced++;
        }
    }

    printf("%d\n", advanced);

    return 0;
}
