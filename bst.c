#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;    
};
void preorder(struct node* root);
struct node* createnode()
{
    int data;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to be inserted:\n");
    scanf("%d",&data);
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    printf("Data Inserted  :%d \n",data);
    return newnode;
};

void preorder(struct node* root)
{
    if(root !=NULL){
        printf("%d  |",root->data);
        preorder(root->left);
        preorder(root->right);

    }
    
};

void postorder(struct node* root)
{
    if(root !=NULL){
        
        postorder(root->left);
        postorder(root->right);
        printf("%d  |",root->data);
        

    }
    
};

void Inorder(struct node* root)
{
    if(root !=NULL){
        Inorder(root->left);
        printf("%d  |",root->data);
        Inorder(root->right);

    }
    
};


int main(){
    struct node *root;
    root=createnode();
    root->left=createnode();
    root->right=createnode();
    root->left->left=createnode();
    printf("PREORDER \n");
    preorder(root);
    printf(" \n POSTORDER \n ");
    postorder(root);
    printf(" \n INORDER \n ");
    Inorder(root);
    

}
