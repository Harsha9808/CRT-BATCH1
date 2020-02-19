#include<stdio.h>
int main()
{
    int b=100;
    void fun(int);
    printf("\n%d",b);
    fun(b);
    printf("\n%d",b);
    return 0;
}
void fun(int a)
{
    a= 200;
}