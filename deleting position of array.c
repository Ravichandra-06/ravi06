//delete position of array

 #include <stdio.h>
 #define CAP 10 
int main() {
int a[CAP] = {1, 2, 3, 4, 5};
int n = 5;
int pos=2;
for(int i = pos;i<n; i++) {
a[i]= a[i + 1];
}
 n--;
if(pos < 1 || pos > n) {
printf("Invalid position\n");
}
for(int i = 0; i <n; i++) {
printf("%d ", a[i]);
}
printf("\nravichandra\n");
printf("1SV24CS119");
return 0;
}
