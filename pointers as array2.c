#include<stdio.h>
int main()
{
    int a[5],i;
    printf("\nenter 5 numbers :\n");
    for( i=0; i<5;i++)
    scanf("%d", a+1);
    for(int i = 0; i<5; i++)
    printf("\n%d",*(a+i));
    return 0;
}