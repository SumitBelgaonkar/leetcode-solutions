#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)
        return "";

    int i = 0;

    while (strs[0][i] != '\0') {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {

            if (strs[j][i] != ch || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }

        i++;
    }

    return strs[0];
}

int main() {

    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char strs[n][100];

    printf("Enter the strings:\n");

    for (int i = 0; i < n; i++) {
        scanf("%s", strs[i]);
    }

    // Array of pointers
    char *ptrs[n];

    for (int i = 0; i < n; i++) {
        ptrs[i] = strs[i];
    }

    char *result = longestCommonPrefix(ptrs, n);

    printf("Longest Common Prefix: %s\n", result);

    return 0;
}