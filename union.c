#include<stdio.h>
union student
{
    int roll;
    char nm[50];
    int tot;
    char crs[10];
};
int main()
{
    union student s;
    printf("\n%d", sizeof(s));
    return 0;
}