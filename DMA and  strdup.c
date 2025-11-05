#include <stdio.h>
#include <stdlib.h>

char* my_strdup(char *src) {
    char *dst, *p = src;
    int len = 0;
    while (*p++) len++;
    dst = (char*)malloc(len + 1);
    if (dst == NULL) return NULL;
    char *q = dst;
    while (*src) *q++ = *src++;
    *q = '\0';
    return dst;
}

int main() {
    char str[] = "Hello World";
    char *copy = my_strdup(str);
    if (copy != NULL) {
        printf("Original: %s\n", str);
        printf("Copy: %s\n", copy);
        free(copy);
    }
    return 0;
}
