#include<stdio.h>
int main()
{
    int a[5]={11,22,33,44,55},*p;
    p=a;
    for(int i=0; i<5;i++)
    printf("\n%d",*(p+i));
    return 0;
}