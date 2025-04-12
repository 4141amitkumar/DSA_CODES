#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
   int f;
   int b;
   vector<int> arr;     //int arr[5];  when using array
   Queue(int size){
    f=0;  //representing front of the queue
    b=0;  //representing back of the queue
    vector<int> v(size);
    arr = v;
   }
   void push(int val){
    if(b==arr.size()){
        cout<<"Queue is FULL!"<<endl;
        return;
    }
    arr[b]=val;
    b++;
   }
   void pop(){
    if(f-b==0){
        cout<<"Queue is EMPTY!"<<endl;
        return;
    }
    f++;
   }
   int front(){
    if(f-b==0){
        cout<<"Queue is EMPTY!"<<endl;
        return -1;
    }
    return arr[f];
   }
   int back(){
    if(f-b==0){
        cout<<"Queue is EMPTY!"<<endl;
        return -1;
    }
    return arr[b-1];
   }
   int size(){
    return b-f;
   }
   bool empty(){
    if(f-b==0) return true;
    else return false;
   }
   void display(){
    for(int i=f;i<b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}

//Problems in Array Implementation of Queue
//1. We are wasting spaces, jab bhi pop kr rhe, starting ke spaces bekaar jaa rhe

//But this has solution--> Circular Array