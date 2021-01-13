#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

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
    printf("\nList Items: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n\n");
}
void sort()
{
    struct node *ptr, *s;
    int value;
    if (start == NULL)
    {
        cout<<"The List is empty"<<endl;
        return;
    }
    ptr = start;
    while (ptr != NULL)
    {
        for (s = ptr->next; s !=NULL; s = s->next)
        {
            if (ptr->data > s->data)
            {
                value = ptr->data;
                ptr->data = s->data;
                s->data = value;
            }
        }
        ptr = ptr->next;
    }
}
void search(int value)
{
    int pos = 0;
    bool flag = false;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    struct node *s;
    s = start;
    while (s != NULL)
    {
        pos++;
        if (s->data == value)
        {
            flag = true;
            cout<<"Element "<<value<<" is found at position "<<pos<<endl;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"Element "<<value<<" not found in the list"<<endl;
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
    int n;
    cout<<"Enter the number of value you want to insert: ";
    cin>>n;
    cout<<"Now enter the values."<<endl;
    for(int i=0; i<n; ++i)
    {
        int a;
        cin>>a;
        listinsert(a);
    }
    showlist();
    cout<<"\nEnter the value you want to search: ";
    int b;
    cin>>b;
    search(b);
    cout<<"\nList after  sorting:"<<endl;
    sort();
    showlist();
    cout<<"\nEnter the value you want to delete: ";
    int c;
    cin>>c;
    deletefromlist(c);
    cout<<"\nList after deleting:"<<endl;
    showlist();
    return 0;
}
