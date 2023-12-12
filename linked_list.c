#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* add_at_end(struct node *ptr,int data){  //here time complexity is reduced to O(1)because pointer is always pointing to end so no need to traverse
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
}

struct node* add_at_beg(struct node *head,int d){
    struct node* ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;//first keep it null

    ptr->link=head;//Update the pointer to point to head;
    head=ptr; 

    return head;
}

int main(){
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=63;
    ptr->link=NULL;

    head->link=ptr;
    int data=12;

    head=add_at_beg(head,data);
    ptr=head;
    

    
    ptr=add_at_end(ptr,82);
    ptr=add_at_end(ptr,52);
    ptr=add_at_end(ptr,58);
    ptr=add_at_end(ptr,62);

    ptr=head;

    while(ptr != NULL){
        printf("NODE:%d \n",ptr->data);
        ptr=ptr->link;

    }
    return 0;
}