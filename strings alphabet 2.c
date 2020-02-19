#include<stdio.h>
int main()
{
    char str[45];
    int i;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        printf("%c",str[i]+1);
    }
    else
    {
        if(str[i]>='v'&&str[i]<='z')
        printf("a");
        elseif(str[i]>='b'&&str[i]<='d')
        printf("e");
        elseif(str[i]>='f'&&str[i]<='h')
        printf("i");
        elseif(str[i]>='j'&&str[i]<='n')
        printf("o");
        else
        printf("u");
    }
    }
    return 0;
}