#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int *mat = (int*)malloc(R * C * sizeof(int));
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", mat + i * C + j);

    if (R == C) {
        for (int i = 0; i < C; i++) {
            for (int j = 0; j < R; j++)
                printf("%d ", *(mat + j * C + i));
            printf("\n");
        }
    } else {
        int *trans = (int*)malloc(C * R * sizeof(int));
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                *(trans + j * R + i) = *(mat + i * C + j);
        for (int i = 0; i < C; i++) {
            for (int j = 0; j < R; j++)
                printf("%d ", *(trans + i * R + j));
            printf("\n");
        }
        free(trans);
    }
    free(mat);
    return 0;
}
