#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    node *next;
};
node *start=NULL;
void listinsert(int data)
{
    node *item=(node*)malloc(sizeof(node));
    item->data=data;
    item->next=start;
    start=item;
}
void showlist()
{
    node *current=start;
    printf("\n\nList Items: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
void deletefromlist(int data)
{
    node *current=start;
    node *previous=NULL;
    while(current!=NULL)
    {
        if(current->data==data)
        {
            if(previous==NULL)
                start=current->next;
            else
                previous->next=current->next;
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
    showlist();
    deletefromlist(3);
    printf("list after deleting 3\n");
    showlist();
    return 0;
}
