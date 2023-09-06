#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    // Calculate the number of flagstones needed for the width and length
    long long width_flagstones = (n + a - 1) / a;
    long long length_flagstones = (m + a - 1) / a;

    // Calculate the total number of flagstones
    long long total_flagstones = width_flagstones * length_flagstones;

    printf("%lld\n", total_flagstones);

    return 0;
}
