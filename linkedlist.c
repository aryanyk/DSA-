#include<stdio.h>
#include<stdlib.h>
// in a single linked list only one link but many data memeber can be there.
struct node{ 
    int data;
    struct node *link; //this type of structure is called self reflential structure.
};

//Traversing Code[means visiting every single node in linked list]
//Time complexity =o(n)
void count_of_nodes(struct node *head){
    int count=0;
    if(head==NULL){
        printf("Linked List is Empty.\n");
    }
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("The number of Nodes are %d\n",count);

}

//Print data function
//Time complexity =o(n)
void print_data(struct node *head){
    if(head==NULL){
        printf("The Linkedlist is Empty \n");
    }
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("The data is %d \n",ptr->data);
        ptr=ptr->link;
    }
}

//adding node at the end

void node_at_end(struct node *head,int data){
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node *)malloc(sizeof(struct node));

    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL){ //Here time complexity is O(n)
        ptr=ptr->link;
    }
    ptr->link=temp;

}

int main(){
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));

    head->data=26; //Adding data to memeber using arrow access operator.
    head->link=NULL ; //pointing it to NULL

    printf("%d\n",head->data);



    //2nd NODE
    //creating a new current pointer to point towards node
    struct node *current=malloc(sizeof(struct node));
    current->data=27;
    current->link=current;
    head->link=current; //head is now pointing towards current.

    printf("%d \n ",current->data);
    


    //3rd NODE
    current=malloc(sizeof(struct node));
    current->data=8;
    current->link=NULL;
    head->link->link=current; //using  refernce linking to connect to 3rd node.
    printf("%d \n",current->data);
    
    count_of_nodes(head);
    print_data(head);
    node_at_end(head,23);
    print_data(head);
    count_of_nodes(head);
    return 0;

}