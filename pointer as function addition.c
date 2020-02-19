#include<stdio.h>
int main()
{
    int add(int*,int*);
    int n1=3,n2=4;
    printf("\nsum is %d",add(&n1,&n2));
    
    return 0;
}
int add(int *p1, int *p2)
{
    return *p1 + *p2;
}