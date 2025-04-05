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


    cout<<(*(a.next)).val<<endl;  //we can print value of b node, when we have access of node a only.
    cout<<((a.next)->next)->val<<endl;
    cout<<(((a.next)->next)->next)->val<<endl;

}
//(*(a.next)).val is same is a.next->val;