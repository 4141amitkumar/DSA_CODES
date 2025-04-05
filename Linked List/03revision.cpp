#include<iostream>
using namespace std;
class Student{    //user defined data type
public:
    string name;
    int rno;
    float marks;

    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void change(Student x){
    x.name = "Raghav";
}
int main(){
    Student s("Amit",76,92.6);
    cout<<s.name<<endl;
    change(s);    // as it is pass by value, it creates a new variable(dabba) and change name there. And the original variable name value is not changed.
    cout<<s.name<<endl;
}

//Pass-by-reference: When a method is called, the method arguments reference the same variable 
//in memory as the caller. Pass-by-value: When a method is called, the caller passes a copy of 
//the argument variables to the method resulting in two values in memory.

//Here value is not changing means it is pass by value.

//int and vectors and by default pass by value and likewise class student is also.
//array is pass by reference by default