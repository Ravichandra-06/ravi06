#include<stdio.h>
#define cap 10
int main()
{   
    printf("USN : 1SV24CS119\nNAME : ravichandra\n");
    int a[cap]={1,3,5,7,9};
    int n=5;
    if(n>0){
        for(int i=0;i<n-1;i++){
            a[i]=a[i+1];
        }
        n--;
    }
    else{
        printf("Array is empty");
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
