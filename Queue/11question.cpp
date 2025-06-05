//Reorder queue (Interleave 1st Half with 2nd Half)(Even Length)(**Do this by using one Stack Only**)
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
int main(){
    queue<int> q;
    stack<int> st;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    
    display(q);
    int n = q.size();
    //step 1
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //step 2
    for(int i=0;i<n/2;i++){
        q.push(st.top());
        st.pop();
    }
    //step 3
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //step 4
    for(int i=0;i<n/2;i++){
        q.push(st.top());
        q.push(q.front());
        q.pop();
        st.pop();
    }
    //step 5
    for(int i=0;i<n;i++){
        st.push(q.front());
        q.pop();
    }
    //step 6
    for(int i=0;i<n;i++){
        q.push(st.top());
        st.pop();
    }
    display(q);
}