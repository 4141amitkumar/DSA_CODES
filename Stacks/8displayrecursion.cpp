#include<iostream>
#include<stack>
using namespace std;
//display using recursion
void displayreverse(stack<int>& st){  //T.C-> O(n)  and S.C. -> O(n)  due to "call stack" space
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayreverse(st);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<endl;
    displayreverse(st);
    cout<<endl;
    display(st);
}