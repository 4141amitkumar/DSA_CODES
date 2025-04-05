#include <iostream>
using namespace std;
class Node{  // User defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this-> next = NULL;
    }
};

class LinkedList{ // User defined Data Structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;    //first step must be this (important!!!)
            temp->next = t;
            size++;
        }
    }

    void deleteAtHead(){
        if(size==0)  cout<<"List is Empty"<<endl;
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size==0) cout<<"List is empty"<<endl;
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll; //{ }     empty linked list
    ll.insertAtHead(10);  //{10->NULL}
    ll.display();
    ll.insertAtHead(20);  //{20->10->NULL}
    ll.display();
    ll.insertAtHead(30);  //{30->20->10->NULL}
    ll.display();
    ll.insertAtHead(40);
    ll.insertAtEnd(50);
    ll.insertAtEnd(60);
    ll.display();
    ll.insertAtIdx(4,80);
    ll.display();
    ll.deleteAtTail();
    ll.display();
}