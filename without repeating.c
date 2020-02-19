/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// without repeating
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,size,i,j;
    printf("\n size?");
    scanf("%d",&size);
    arr=(int*)malloc(sizeof(int)*size);
    printf("\n enter %d numbers :\n",size);
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        //int f=0;
        for(j=0;j<size;j++)
        {
            if(i==j)
            continue;
            if(arr[j]==arr[i])
            {
                //f=1;
                break;
            }
        }
        //if (f=0)
        if(j==size)
        printf("\n %d",arr[i]);
    }
    return 0;
}
        
