#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};
node *start = NULL;
node *finish = NULL;
bool isempty()
{
    if(start == NULL)
        return true;
    return false;
}
void listinsert(int data)
{
    node *link = (node*)malloc(sizeof(node));
    link -> data = data;
    link -> prev = NULL;
    link -> next = start;
    if(isempty())
        finish = link;
    else
        start -> prev = link;
    start = link;
}
void showlist()
{
    node *current = start;
    printf("\nList items : ");
    while(current != NULL)
    {
        printf("%d ",current -> data);
        current = current -> next;
    }
    printf("\n");
}
void showreverselist()
{
    node *current = finish;
    printf("\nList items : ");
    while(current != NULL)
    {
        printf("%d ",current -> data);
        current = current -> prev;
    }
    printf("\n");
}
int main()
{
    listinsert(1);
    listinsert(2);
    listinsert(3);
    listinsert(4);
    listinsert(5);
    showlist();
    showreverselist();
    return 0;
}
