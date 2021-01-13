#include<bits/stdc++.h>
using namespace std;
const int size=5;
int queue1[size],front=0,rear=0;
void enque(int value)
{
     if(rear==size){
          cout<<"queue is full"<<endl;
     }
     else{
          cout<<value<<" "<<"added "<<endl;
     queue1[rear]=value;
}
  rear++;
}
void dequeue(int value){
    if(front==rear){
     cout<<"queue is empty"<<endl;
    }
 else{
     front=front+1;
     cout<<endl;
     cout<<value<<" removed from queue"<<endl;
 }
}
void disply()
{
     int temp;
     temp=front;
     if(front==rear){
          cout<<"the queue is empty"<<endl;
     }
     else{
               cout<<endl;
          cout<<"element in current queue:";
     for(int i=temp;i<rear;i++){
          cout<<queue1[i]<<" ";
     }
     cout<<endl;
     }
}
int main()
{
    enque(5);
    disply();
    enque(4);
    disply();
    enque(3);
    disply();
    dequeue(5);
    disply();
    dequeue(4);
    disply();
    dequeue(3);
    disply();
}

