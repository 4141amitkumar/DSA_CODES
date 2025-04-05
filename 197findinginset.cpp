#include <iostream>
#include<unordered_set>  //header file for set
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    int target = 4;
    if(s.find(target)!=s.end()){
        cout<<"exists"<<endl;
    }
    else cout<<"doesn't exist";

    //s.find()  --> it searches in the set, and if it is not found in the set then it return the last element
    //and syntax says that if s.find(target) is not equal to the last element means the element already founded in the set before that
}