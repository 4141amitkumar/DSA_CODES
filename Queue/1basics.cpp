#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>& q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

int main(){
    queue<int> q;
    //push
    //pop
    //front --> top
    //size
    //back

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    
    //now we have to display queue (T.C.->O(n), S.C.->O(1))
    display(q);
}