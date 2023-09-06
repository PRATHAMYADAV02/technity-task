#include <stdio.h>

int birthdayCakeCandels(int n, int candels[]) {
    int max_height = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (candels[i] > max_height) {
            max_height = candels[i];
            count = 1;
        } else if (candels[i] == max_height) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int candels[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &candels[i]);
    }

    int resut = birthdayCakeCandels(n, candels);
    printf("%d\n", resut);

    return 0;
}
