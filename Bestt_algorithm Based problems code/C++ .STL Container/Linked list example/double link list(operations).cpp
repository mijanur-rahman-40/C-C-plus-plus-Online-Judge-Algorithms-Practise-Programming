#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   node *next;
   node *prev;
};
node *start=NULL;
node *finish=NULL;
bool isimpty()
{
    if(start==NULL)
        return true;
    return false;
}

void listinsert(int data){
    node *item=(node*)malloc(sizeof(node));
    item->data=data;
    item->next=start;
   item->prev=NULL;
   if(isimpty()){
    finish=item;
   }
   else{
    start->prev=item;
   }
   start=item;

}
void showlist(){
  node *current=finish;
     printf("List items:\n");

while(current!=NULL){
    printf("%d",current->data);
    current=current->prev;
  }
   printf("\n");
   }
/*
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
*/
void reverselist()
{
    node *current=start;
    printf("\n List items\n");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
int main()
{printf("\t");
     listinsert(5);
     listinsert(4);
      listinsert(3);
       listinsert(2);
       listinsert(1);
        listinsert(0);
        showlist();
        reverselist();
        return 0;
}
