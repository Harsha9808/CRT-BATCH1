#include<stdio.h>
int main()
{
    char name[50];
    printf("\nenter your name :");
    scanf("%[^\n]s", name);
    printf("\nhi %s, play well....", name);
    return 0;
}
    