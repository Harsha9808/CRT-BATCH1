#include<stdio.h>
int main()
{
    int n=8;
    int *p;
    p= &n;
    printf("\n%d",n);
    printf("\n%u",*p);
    printf("\n%u",&n);
    printf("\n%u",p);
    return 0;
}