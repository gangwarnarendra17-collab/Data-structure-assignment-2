
#include <stdio.h>

int main() {
    int arr[100], result[100], stack[100];
    int n, i, top = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        while (top != -1 && stack[top] <= arr[i]) {
            top--;
        }

        if (top == -1) {
            result[i] = -1;
        } else {
            result[i] = stack[top];
        }

        stack[++top] = arr[i];
    }

    printf("Next Greater Elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], result[i]);
    }

    return 0;
}
