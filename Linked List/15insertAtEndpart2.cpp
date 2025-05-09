#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this-> val = val;
        this-> next = NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}
int n=0;
int size(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    return n;
}

void insertAtEnd(Node* head, int val){
    Node* t = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    insertAtEnd(a,80);
    display(a);
}
