#include <stdio.h>
#include<stdlib.h>

#define MAX 4

int top = -1;
int arr[MAX];
int data;

void push(int data) {
    if (top == MAX - 1) {
        printf("overflow");
    } else {
        top = top + 1;
        arr[top] = data;
    }
}

void pop() {
    if (top == -1) {
        printf("stack is Empty");
    } else {
        printf("the element is %d", arr[top]);
        top = top - 1;
    }
}

void show() {
    if (top == -1) {
        printf("nothing to show");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d ", arr[i]);
        }
    }
}

int isFull() {
    if (top == MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

void peek() {
    if (isEmpty()) {
    printf("stack is Empty");
} else {
    printf("the element at the top is %d", arr[top]);
}
}

int main() {
    int choice;
    while (1) {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.Show top element\n");
        printf("4.Show all the elements\n");
        printf("5.exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the Element to be added:\n");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                show();
                break;
            case 5:
                exit(1);
                break;
            default:
                break;
        }
    }
}