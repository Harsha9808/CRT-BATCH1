#include<stdio.h>
int main()
{
    int n1=5,n2=2, *p1= &n1, *p2= &n2;
    int s, *p3= &s;
    *p3= *p1 + *p2;
    printf("\n%d",s);
    
    return 0;
}