#include<iostream>
using namespace std;
class Node{  //DLL Node
public:
  int val;
  Node* next;
  Node* prev;
  Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev =NULL;
  }
};
class Deque{
public:
  Node* head;
  Node* tail;
  int size;
  Deque(){
    head=tail=NULL;
    size=0;
  }
  void push_back(int val){  //insertAtTail
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    size++;
  }
  void push_front(int val){  //insertAtHead
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    size++;
  }
  void pop_front(){  //deleteAtHead
    if(size==0){
        cout<<"Deque is Empty!";
        return;
    }
    else{
        head=head->next;
        if(head) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
  }
  void pop_back(){  //deleteAtTail
    if(size==0){
        cout<<"Deque is Empty!";
        return;
    }
    else if(size==1){
        pop_front();
        return;
    }
    else{
        Node* temp=tail->prev;
        temp->next =NULL;
        tail=temp;
        size--;
    }
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
  int size_of_deque(){
    return size;
  }
  bool empty(){
    if(size==0) return true;
    else return false;
  }
  void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
  }
};
int main(){
    Deque dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.display();
    dq.pop_back();
    dq.display();
    dq.pop_front();
    dq.display();
    dq.push_front(50);
    dq.display();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}