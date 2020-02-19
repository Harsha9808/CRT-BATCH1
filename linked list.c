#include<stdio.h>
#include<stdlib.h>
struct element
{
    int data;
    struct element *next;
};
struct element *head=NULL;  //head points to first element and it contains null now as there is no element in the list.
void append(int val)          //ad a new element at the end of the list
{
    struct element*ele=(struct element*)malloc(sizeof(struct element));
    ele->data=val;
    ele->next=NULL;
    if (head == NULL)
    {
        head=ele;
    }
    else
    {
        struct element *t= head;
        while(t->next != NULL)
        {
            t=t->next;
        }
        t->next=ele;
    }
}
void display()
{
    for(struct element*t=head;t !=NULL; t=t->next)
    printf("\t%d",t->data);
}
int main()
{
    append(12);
    append(45);
    append(567);
    append(101);
    display();
    return 0;
}
            
       