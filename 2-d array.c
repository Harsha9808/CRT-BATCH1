#include<stdio.h>
int main()
{
    int a[3][3];
    int r,c;
    printf("\nenter 9 values:\n");
    for(r=0;r<3;r++)
    for(c=0;c<3;c++)
    scanf("%d",&a[r][c]);
    printf("\nall 9 values are:\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++)
        printf("%d",a[r][c]);
        printf("\n");
    }
}