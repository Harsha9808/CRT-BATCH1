/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//whiteblackgreen 3 - white black green
//iamlearningclang 8-ia ml ea rn in gc la ng
#include <stdio.h>
#include<string.h>

int main()
{
    char big_s[100];
    int p,l;
    scanf("%s",big_s);
    scanf("%d",&p);
    l=strlen(big_s);
    if(l%p==0)
    {
        int ssl=l/p;
        for(int i=0,t=0;big_s[i]!='\0';i++)
        {
            printf("%c",big_s[i]);
            t++;
            if(ssl == t)
            {
                printf(" ");
                t=0;
            }
        }
    }
            else
            {
                printf("\n equal lengthed splitting is not possible..");
            }
            return 0;
}
    