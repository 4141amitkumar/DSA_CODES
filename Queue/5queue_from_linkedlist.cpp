//Best is the Linked List
#include<iostream>
using namespace std;
class Node{    //user defined data type
public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};
class Queue{  //user defined data structure
public:
  Node* head;
  Node* tail;
  int size;
  Queue(){
    head=tail=NULL;
    size=0;
  }
  void push(int val){  //insertAtTail
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
  }
  void pop(){  //deleteAtHead
    if(size==0){
        cout<<"Queue is Empty!"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    size--;
    delete(temp);  //to stop the wastage after the pop
  }
  int front(){
    if(size==0){
        cout<<"Queue is Empty!"<<endl;
        return -1;
    }
    return head->val;
  }
  int back(){
    if(size==0){
        cout<<"Queue is Empty!"<<endl;
        return -1;
    }
    return tail->val;
  }
  void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
  }
  int size_of_queue(){
    return size;
  }
  bool empty(){
    if(size==0) return true;
    else return false;
  }
};

int main(){
    Queue q;
    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}

//Advantage of Linked List implementation of queue over array implementation:
//1. Unlimited Size
//2. Natural, queue is like Linked List Implementation

//Disdvantage of Linked List implementation of queue over array implementation:
//For each element we have a Node-> val, *Next....memory thoda jyada lag rha
