#include<stdio.h>
int a[5];                     // the queue
int front=-1,rear=-1,cnt=0;
int main()
{
    int empty();              // return true if queue is empty
    int full();              // returns true if queue is full
    void enqueue(int);      // inserting a new element 
    int dequeue();         // removing an element
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
    return cnt==5? 1:0;       // returns 1 if queue is full
}
void enqueue(int v){
    if(full()==1)            // if true then queue is full, it stops
    return;
    rear=(rear+1)%5;
    a[rear]=v;               // inserting a new element
    cnt++;
}
int dequeue(){
    if (empty()==1)         // if true then queue is full
    return -1;
    front=(front+1)%5;
    int v=a[front];
    cnt--;
    return v;
}