#include <stdio.h>

int main() {
    int n;
    int matrix[100][100];
    int isIdentity = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0;
                break;
            }
            if (i != j && matrix[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
        if (!isIdentity)
            break;
    }

    if (isIdentity)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}
