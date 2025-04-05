#include<iostream>
using namespace std;
class Node{ //DLL Node
public:
    int val;
    Node* next;
    Node* prev; //extra for DLL
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL; //extra for DLL
    }
};
void display(Node* head){  //O(1) space
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

void displayUsingRecursion(Node* head){  //O(n) space
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayUsingRecursion(head->next);
}

void displayRev(Node* head){  //O(n) space
    if(head==NULL) return;
    displayRev(head->next);
    cout<<head->val<<" ";
}

//Now see the benefit of using doubly linked list for reversing the linked list
void displayRevv(Node* tail){ // O(1) space
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
int main(){
    // 10 20 30 40 50
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    displayUsingRecursion(a);
    cout<<endl;
    displayRev(a);
    cout<<endl;
    displayRevv(e);
}