
#include <stdio.h>

int main() {
    int arr[100], n, k, i, temp;

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

    printf("Enter number of left rotations: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < k; i++) {
        temp = arr[0];

        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }

        arr[n - 1] = temp;
    }

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
