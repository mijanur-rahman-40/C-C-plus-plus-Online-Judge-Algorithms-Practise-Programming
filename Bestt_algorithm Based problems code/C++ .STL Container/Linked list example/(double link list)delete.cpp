#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   node *next;
};
node *start=NULL;
void listinsert(int data){
    node *link=(node*)malloc(sizeof(node));
    link->data=data;
    link->next=start;
    start=link;

}
void showlist(){
node *current=start;
printf("List items:\n");
while(current!=NULL){
    printf("%d",current->data);
    current=current->next;
}
printf("\n");
}
void deletefromlist(int data){
 node *previous=NULL;
 node *current=start;
 while(current!=NULL){
    if(current->data){
        if(previous==NULL){
            start=current->next;
        }
        else{
            previous->next=current->next;
        }
    }
    previous=current;
    current=current->next;
 }
}
int main()
{
     listinsert(5);
     listinsert(4);
      listinsert(3);
       listinsert(2);
       listinsert(1);
        listinsert(0);
    int i;
        showlist();
        deletefromlist(0);
        printf("After deleting the list is:\n");
        showlist();
        return 0;
}
