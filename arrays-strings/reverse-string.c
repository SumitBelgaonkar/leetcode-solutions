#include <stdio.h>
#include <stdlib.h>

void reverseString(char *s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size entered.\n");
        return 1;
    }

    char *s = (char *)malloc((n + 1) * sizeof(char));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &s[i]);
    }
    s[n] = '\0';

    reverseString(s, n);

    printf("The reversed string is: ");
    for (int i = 0; i < n; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    free(s);
    return 0;
}