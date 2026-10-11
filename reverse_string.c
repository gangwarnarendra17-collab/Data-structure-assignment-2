#include <stdio.h>
#include <string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch) {
    if (top < SIZE - 1) {
        stack[++top] = ch;
    }
}

char pop() {
    return stack[top--];
}

int main() {
    char str[SIZE];
    int i;

    printf("Enter a string: ");
    fgets(str, SIZE, stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    printf("Reversed string: ");

    while (top != -1) {
        printf("%c", pop());
    }

    printf("\n");
    return 0;
}
