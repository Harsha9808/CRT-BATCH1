#include<stdio.h>
int a[5];
int front=-1,rear=-1,cnt=0;
int main()
{
    int empty();
    int full();
    void enqueue(int);
    int dequeue();
    enqueue(12);
    enqueue(112);
    printf("\n%d",dequeue());
    while(!empty())
    printf("\n%d",dequeue());
    printf("\n%d",dequeue());
    return 0;
}
int empty(){
    if (cnt==0)
    return 1;
    else
    return 0;
}
int full(){
    return cnt==5? 1:0;
}
void enqueue(int v){
    if(full()==1)
    return;
    rear=(rear+1)%5;
    a[rear]=v;
    cnt++;
}
int dequeue(){
    if (empty()==1)
    return-1;
    front=(front+1)%5;
    int v=a[front];
    cnt--;
    return v;
}