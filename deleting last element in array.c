#include<stdio.h>
#define cap 10
int main()
{   
    int a[cap]={1,3,5,7,9};
    int n=5;
    if(n>0){
        n--;
    }
    else{
        printf("array is empty");
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
