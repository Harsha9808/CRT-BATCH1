#include<stdio.h>
int main()
{
    int a[5] ={12,34,56,78,90};
    for(int i=0;i<5;i++)
    printf("\n%d",*(a+i));
    return 0;
}