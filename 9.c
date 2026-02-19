#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int left, right;
    int palindrome = 1;

    scanf("%s", s);

    left = 0;
    right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (palindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}
