#include<iostream>
using namespace std;
class Student{    //user defined data type
public:
    string name;
    int rno;
    float marks;
};
int main(){
    Student s;    //initialization of a class 's'.
    s.name = "Amit";     //declaration of the values of class 's'.
    s.rno = 76;
    s.marks = 92.6;
    cout<<s.rno;
}