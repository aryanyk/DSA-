#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;


void enqueue(int x){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
        rear++;
    }
    else if(((rear+1)%MAX)==front){  //this is for the mid condition checking where the queue is full
        printf("____queue is full_______\n");
       
    }
     else{ //this is for adding element in the mid
        rear=(rear+1)%MAX; // modulus is to add elemt after the end of the  queue in circular mannner
        queue[rear]=x;
     }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty");
    }
    else if(front==rear){
        printf("%d \n",queue[front]); //for the end of the queue last element.
        front=rear=-1;
    }
    else{
        printf("%d \n",queue[front]);
        front=(front+1)%MAX ; // for cirualar element
    }

    }

void display(){
    int i=front;
    if(front==-1&& rear==-1){
        printf("queue is empty \n");
    }
    else{
        while(i!=rear){
            printf("%d \n",queue[i]);
            i=(i+1)%MAX;
        }
        printf("%d \n",queue[rear]);
    }
}

void peek() {
    if(front==-1&& rear==-1){
        printf("queue is empty \n");
    }
    else{
        printf("The peek is %d \n",queue[front]);
    }
    }

int main(){
 while (1)
 {
    int choice;
    int input;
    printf("Choose the operation for Circular Queue:\n");
    printf("1.Enqueue:\n");
    printf("2.Dequeue:\n");
    printf("3.Display:\n");
    printf("4.Peek:\n");
    printf("5.Exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        
       printf("Enter the element to be added:\n");
       scanf("%d",&input);
       enqueue(input);
       break;

    case 2:
        dequeue();
    break;
    case 3:
        display();
    break;
    case 4:
        peek();
    break;
    case 5:
        exit(1);
    break;
    
    default:
    printf("Invalid Input\n");
        break;
    }

 }
 
}