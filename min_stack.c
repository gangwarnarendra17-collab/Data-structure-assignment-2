
#include <stdio.h>

#define SIZE 100

int stack[SIZE];
int minStack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow!\n");
        return;
    }

    top++;
    stack[top] = value;

    if (top == 0 || value <= minStack[top - 1]) {
        minStack[top] = value;
    } else {
        minStack[top] = minStack[top - 1];
    }

    printf("%d pushed into stack\n", value);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return;
    }

    printf("%d popped from stack\n", stack[top]);
    top--;
}

int getMin() {
    return minStack[top];
}

int main() {
    push(30);
    push(10);
    push(20);
    push(5);

    if (top != -1) {
        printf("Minimum element: %d\n", getMin());
    }

    pop();

    if (top != -1) {
        printf("Minimum element after pop: %d\n", getMin());
    }

    return 0;
}
