#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int base, size, r, c;
    int rowMajor, colMajor;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[100][100];

    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter size of each element in bytes: ");
    scanf("%d", &size);

    printf("Enter row and column index (0-based): ");
    scanf("%d %d", &r, &c);

    if (rows < 1 || rows > 100 ||
        cols < 1 || cols > 100 ||
        r < 0 || r >= rows ||
        c < 0 || c >= cols ||
        size <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    rowMajor = base + size * (r * cols + c);
    colMajor = base + size * (c * rows + r);

    printf("Element value: %d\n", arr[r][c]);
    printf("Row-major address: %d\n", rowMajor);
    printf("Column-major address: %d\n", colMajor);

    return 0;
      }
      
