#include<stdio.h>
int main()
{
    int a[6],i,si,ei,mi,sv;
    printf("\nenter 6 values :\n");
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);
    printf("\nenter search value:");
    scanf("%d",&sv);
    si=0;ei=5;
    while(si<=ei)
    {
        mi=(si+ei)/2;
        if(sv == a[mi])
        {
            printf("\nfound at :%d", mi+i);
            break;
        }
        else if (sv>a[mi])
        si=mi+1;
        else
        ei=mi-1;
    }
    if(si>ei)
    printf("\nnot found.");
    return 0;
}
        