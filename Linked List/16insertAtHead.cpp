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
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
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
    cout<<ll.size;
}