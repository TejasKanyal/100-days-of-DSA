#include <stdio.h>

int main() {
    int n, k;
    int arr[100], rotated[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    int index = 0;
    for (int i = n - k; i < n; i++) {
        rotated[index++] = arr[i];
    }

    for (int i = 0; i < n - k; i++) {
        rotated[index++] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
