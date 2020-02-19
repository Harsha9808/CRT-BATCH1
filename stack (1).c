#include<stdio.h>
int stk[5];
int top=-1;
int main()
{
    int empty();
    int full();
    int push();
    int pop();
    push(12);
    push(45);
    push(567);
    push(7);
    printf("\n%d\n",pop());  //7
    while(empty())==0
    {
        printf("\n%d",pop());
    }
    printf("\n\n%d",pop()); //-1
    return 0;
}
int empty(){
    return top==-1? 1:0;
}
int full(){
    return top==4? 1:0;
}
void push(int v){
    if(full())return;
    stk[++top]=v;
}
int pop(){
    if(empty()) return -1;
    return stk[top--];
}