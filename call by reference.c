#include<stdio.h>
int main()
{
    int b[]={100,200,300};
    void fun(int[]);
    printf("\n%d",b[0]);
    fun(b);
    printf("\n%d",b[0]);
    return 0;
}
void fun(int a[])
{
    a[0]= 200;
}