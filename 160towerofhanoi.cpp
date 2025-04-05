#include <iostream>
using namespace std;
void hanoi( int n, char s, char h, char d){
    if(n==0) return;
    hanoi(n-1, s, d, h);      //1st step is to apply recursion on n-1 rings.....and stay alert about the order of s, h and d
    cout<<s<<"-->"<<d<<endl;  //2nd step is to print that we have moved the last i.e., biggest ring from source to destination
    hanoi(n-1, h, s, d);     //3rd step: here the initial helper rod is the source
}
int main(){
    int n;
    cout<<"Enter the number of rings:";
    cin>>n;
    hanoi(n, 'A', 'B', 'C');
}