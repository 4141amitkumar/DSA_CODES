#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverse(queue<int>& q){
    stack<int> st;
    int n =q.size();
    //queue to stack
    for(int i=1;i<=n;i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    //stack to queue
    for(int i=1;i<=n;i++){
        int x=st.top();
        q.push(x);
        st.pop();
    }
}

//reverse the queue
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverse(q);
    display(q);
}