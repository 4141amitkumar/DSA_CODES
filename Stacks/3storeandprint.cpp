#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //we will use extra stack to store the elemnts of stack
    stack<int> temp;
    while(st.size()!=0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    //putting elements back from temp to st
    while(temp.size()!=0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();
}