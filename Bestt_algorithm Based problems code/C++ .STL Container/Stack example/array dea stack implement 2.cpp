#include <stdio.h>

int ara[100000];
int count = 0;

int isEmpty () {

}
int isFull () {

}
int size() {

}
void push (int num) {

}
int pop () {

}
int top () {

}
int display () {

}
void menu () {
     while (1) {
        printf("Press 1 to push.\n");
        printf("Press 2 to check if the Stack is empty.\n");
        printf("Press 3 to pop.\n");
        printf("Press 4 to show the top element.\n");
        printf("Press 5 to display the Stack.\n");
        printf("Press 6 to check if the Stack is full.\n");
        printf("Press 0 to Exit.\n");
        int n;
        scanf("%d", &n);
        if (n==0) break;
        else if (n==1) {
            printf("Enter the number: ");
            int num;
            scanf("%d", &num);
            push(num);
        }
        else if (n==2) {
            if (isEmpty()) printf("The Stack is empty.\n");
            else printf("The Stack is not empty.\n");
        }
        else if (n==3) {
            if (!isEmpty()) printf("Popped value = %d\n", pop());
            else printf("The Stack is empty.\n");
        }

        else if (n==4) {
            if (!isEmpty()) printf("The top element = %d\n", top());
            else printf("The Stack is empty.\n");
        }

        else if (n==5) display();
        else if (n==6) {
            if (isFull()) printf("The Stack is Full.\n");
            else printf("The Stack is not Full.\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }
}
int main () {
    menu();
    return 0;
}
