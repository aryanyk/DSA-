#include<stdio.h>
#include<stdlib.h>
// in a single linked list only one link but many data memeber can be there.
struct node{ 
    int data;
    struct node *link; //this type of structure is called self reflential structure.
};

int main(){
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));

    head->data=26; //Adding data to memeber using arrow access operator.
    head->link=NULL; //pointing it to NULL

    printf("%d\n",head->data);



    //2nd NODE
    //creating a new current pointer to point towards node
    struct node *current=malloc(sizeof(struct node));
    current->data=27;
    current->link=NULL;
    head->link=current; //head is now pointing towards current.

    printf("%d \n ",current->data);
    


    //3rd NODE
    current=malloc(sizeof(struct node));
    current->data=8;
    current->link=NULL;
    head->link->link=current; //using  refernce linking to connect to 3rd node.
    printf("%d \n",current->data);
    
    return 0;

}