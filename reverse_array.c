
#include <stdio.h>

int main() {
    int arr[100], n, i, temp;

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

    int start = 0;
    int end = n - 1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
