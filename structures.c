#include<stdio.h>
struct student{
    int roll;
    char nm[50];
    int tot;
    char crs[10];
};
int main(){
    struct student s;
    printf("\nroll:");scanf("%d",&s.roll);
    printf("\nname:");scanf("%s", s.nm);
    printf("\ncourse:");scanf("%s",&s.crs);
    printf("\ntotal mark:");scanf("%d",&s.tot);
    printf("\nroll:%d",s.roll);
    printf("\nname:%s",s.nm);
    printf("\ncourse:%s",s.crs);
    printf("\ntotal:%d",s.tot);
    return 0;
}