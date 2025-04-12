#include<iostream>
#include<vector>
using namespace std;
class CircularQueue{
public:
   int f;
   int b;
   int s;  //this for current number of elements in the queue.
   int c; //for normal capacity of array
   vector<int> arr;
   CircularQueue(int k){
    f=0;  //representing front of the queue
    b=0;  //representing back of the queue
    s=0; //initially 0 elements in queue
    c=k;;
    vector<int> v(k);
    arr=v;
   }
   void push(int val){
    if(s==c) {
        cout << "Queue is FULL!" << endl;
        return;
    }
    arr[b]=val;
    b++;
    if(b==c) b=0;  //agar b last pe tha, to usko first pe bhej do, because it's circular
    s++;
   }
   void pop(){
    if(s==0) {
        cout << "Queue is EMPTY!" << endl;
        return;
    }
    f++;
    if(f==c) f=0;  //agar front last me aa gya, to usko bhi first pe bhej do
    s--;
   }
   int front(){
    if(s==0) return -1;
    return arr[f];
   }
   int back(){
    if(s==0) return -1;
    if(b==0)return arr[c-1];  //agar first pe hai, mtlb array ka last wala element hi back pe hai
    return arr[b-1];
   }
   bool empty() {
    if(s==0) return true;
    else return false;
   }

    bool full() {
      if(s==c) return true;
      else return false;
   }
   int size(){
    return s;
   }
   void display(){
    if (empty()) {
        cout << "Queue is EMPTY!" << endl;
        return;
    }
    int count=0;
    int i=f;
    while (count<s) {
        cout<<arr[i]<< " ";
        i=(i+1)%c;
        count++;
    }
    cout<<endl;
  }
};
int main(){
    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();

    q.push(50);  // One last spot
    q.push(60);  // Should be FULL
    q.display();

    q.pop();
    q.pop();
    q.display();

    q.push(60);  // Should insert at beginning (wrap around)
    q.display();

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;
    cout << "Empty: " << (q.empty() ? "Yes" : "No") << endl;
}