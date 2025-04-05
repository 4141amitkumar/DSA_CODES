#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while(st.size()!=0){
        temp.push(st.top());
        st.pop();
    }
    //putting elements back from temp to st
    while(temp.size()!=0){
        st.push(temp.top());
        cout<<st.top()<<" ";
        temp.pop();
    }
}
void pushAtIdx(stack<int>& st, int idx, int val){  //important "&"
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()!=0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushAtIdx(st,3,90);
    print(st);
}