#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    long long total = (long long)(n + 1) * (n + 2) / 2;
    printf("%lld\n", total - sum);

    return 0;
}
