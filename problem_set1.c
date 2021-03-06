#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int v;
    node *next;
};
int main()
{
    node *a = (node*)malloc(sizeof(node));
    node *b = (node*)malloc(sizeof(node));
    node *c = (node*)malloc(sizeof(node));
    node *head = NULL;

    a->v=5;
    a->next=b;

    b->v=6;
    b->next=c;

    c->v=7;
    c->next=NULL;

    head=a;
    print(a);
    printf("\n");
    print_reverse(a);
    printf("\n%d\n",size(head));


    return 0;
}


void print(node *x){

if(x==NULL)
    printf("linked list is empty");

while(x!=NULL){

    printf("%d \n",x->v);
    x=x->next;
}
}


void print_reverse(node *x){

if(x==NULL)
    return;
print_reverse(x->next);
printf("%d ",x->v);

}


int front(node *x){
if(x==NULL){
    printf("linked list is Empty");
    return;
}
return x->v;
}

int back(node*x){

if(x==NULL){
    printf("linked list is empty");
    return;

    while(x->next!=NULL){
        x=x->next;
    }
}
return x->v;
}

int is_empty(node *x){
if(x==NULL)
    return 1;
return 0;
}

int size(node *x){
int count = 0;
while(x){
    count++;
    x=x->next;
}
return count;
}


