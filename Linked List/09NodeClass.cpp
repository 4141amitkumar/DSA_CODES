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
int main(){
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    //Now forming linked list by joining them

    a.next = &b;
    b.next = &c;
    c.next = &d;

    Node temp = a;   //ek new node temp me 'a' node ki value and next wali value daal diye
    
    while(temp.next!=NULL){
        cout<<temp.val<<" ";
        temp = *(temp.next);
    }
    cout<<temp.val;


    //      OR
    // while(1){
    //     cout<<temp.val<<" ";
    //     if(temp.next==NULL) break;
    //     temp = *(temp.next);
    // }


}
