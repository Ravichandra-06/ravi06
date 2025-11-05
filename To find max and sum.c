#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;
    int sum = 0, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    max = *arr;
    for (i = 0; i < n; i++) {
        sum += *(arr + i);
        if (*(arr + i) > max)
            max = *(arr + i);
    }

    printf("Sum = %d\n", sum);
    printf("Maximum = %d\n", max);

    free(arr);
    return 0;
}
