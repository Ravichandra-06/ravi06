#include<stdio.h>
#define CAP 30
void printarray(int a[],int n);
void printarray(int a[CAP],int n)
{
    for(int i=0;i<n&&i<CAP;i++)
    {
        printf("%d",a[i]=i);
    }}
    int main()
    {
        int a[30];
        printarray(a,15);
    }
