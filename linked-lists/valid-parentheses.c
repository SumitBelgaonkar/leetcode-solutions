#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {

    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Opening brackets
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        }

        // Closing brackets
        else {

            if (top == -1)
                return false;

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {

    char s[10000];

    printf("Enter brackets: ");
    scanf("%s", s);

    if (isValid(s))
        printf("Valid parentheses\n");
    else
        printf("Invalid parentheses\n");

    return 0;
}