
#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int linear = -1, low, high, mid;
    int sorted = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter elements in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (i > 0 && arr[i] < arr[i - 1])
            sorted = 0;
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    /* Linear Search */
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            linear = i;
            break;
        }
    }

    if (linear != -1)
        printf("Linear Search: Found at position %d\n", linear + 1);
    else
        printf("Linear Search: Not found\n");

    /* Binary Search requires sorted array */
    if (!sorted) {
        printf("Binary Search requires sorted elements.\n");
        return 0;
    }

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Binary Search: Found at position %d\n", mid + 1);
            return 0;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Binary Search: Not found\n");
    return 0;
}
