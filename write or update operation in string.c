#include <stdio.h>

int main() {
    
    int a[]={10,20,30,40,50,60};int i;
    int n=sizeof(a)/sizeof(a[0]);
    int index=3;
    int newvalue=10;
    if(index>=0&&index<n)
    {
        a[3]=newvalue;
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
    }
    else
    {
        printf("nothing");
    }}
    
