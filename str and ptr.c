#include<stdio.h>
#include<string.h>
struct emp{
    int empno,sal;
    char nm[50];};
int main(){
    struct emp e1,*p;
    p = &e1;
    scanf("%d",&p->sal);
    e1.empno=10;
    strcpy(e1.nm,"ram");
    printf("\nemp no =%d",p->empno);
    printf("\nsalary =%d",p->sal);
    printf("\nName =%s",p->nm);
    return 0;
}