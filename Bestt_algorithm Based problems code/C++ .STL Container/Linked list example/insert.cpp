#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  node *next;
};
 node*start=NULL;
void listinsert(int data){
   node *link=(node *)malloc(sizeof(node));
  link->data=data;
  link->next=start;
  start=link;

}
void showlist(){
  node*current=start;
  while(current!=NULL){
    printf("%d\n",current->data);
    current=current->next;
  }
}
int main()
{
    listinsert(5);showlist();
     listinsert(4);
      listinsert(3);
       listinsert(2);
       listinsert(1);
        listinsert(0);
        showlist();
        return 0;
}
