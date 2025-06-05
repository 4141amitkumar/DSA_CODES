#include<iostream>
#include<queue>
#include<stack>
#include<vector>
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
    int n;
    cout<<"Enter size of queue:";
    cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    display(q);
    int k;
    cout<<"Enter value of K:";
    cin>>k;
    stack<int> st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<k;i++){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
    display(q);
}