#include <stdio,h>
void increase_value(int *val_ptr) {
    *val_ptr = *val_ptr + 10; 
}

int main() {
    int x = 5;

    printf("Before function call, x = %d\n", x);
    increase_value(&x); 

    printf("After function call, x = %d\n", x);
    
    return 0;
}
