//Calculating percentage of 5 subjects
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter marks of 5 subjects:";
    float x1,x2,x3,x4,x5;
    cin>>x1>>x2>>x3>>x4>>x5;
    float p=(x1+x2+x3+x4+x5)/5;
    cout<<"Percentage is:"<<p;
}