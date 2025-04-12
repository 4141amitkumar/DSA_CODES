#include<iostream>
#include<deque>
using namespace std;
void display(deque<int> dq){
    for(int i=0; i<dq.size(); i++) {
        cout<< dq[i]<<" ";
    }
    cout<<endl;
}
int main(){
    deque<int> dq;
    dq.push_back(50);
    dq.push_front(30);
    dq.push_front(25);
    dq.pop_back();
    display(dq);
}