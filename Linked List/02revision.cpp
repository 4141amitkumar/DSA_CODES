#include<iostream>
using namespace std;
class Student{    //user defined data type
public:
    string name;
    int rno;
    float marks;

    //constructor
    // Student(string n, int r, float m){
    //     name = n;
    //     rno = r;
    //     marks = m;
    // }

    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }

    //if we will not keep the same name, then there is no need of this->.
};
int main(){
    Student s("Amit",76,92.6);   //initilization and declaration in one go
    cout<<s.marks;
}