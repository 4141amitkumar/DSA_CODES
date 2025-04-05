#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
};
int main(){
    // 10 20 30 40
    Node a;
    a.val = 10;
    Node b;
    b.val = 20;
    Node c;
    c.val = 30;
    Node d;
    d.val = 40;

    //Now forming linked list by joining them

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
}

//in constructor, it's not necessary to use all data member of that class, you may use one, two or even none(default constructor).
//So, in next code, we will use constructor, to make my code compact.
