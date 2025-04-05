//WAP to count digits of a given number.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int x;
    cin>>x;
    int counter=0;
    // for(int i=0;i<a;i++){
    //     x=x/10;
    //     counter++;
    //     if (x==0) break;
    // }
    while(x!=0){
        x=x/10;
        counter++;
    }
    cout<<"Number of digits are:"<<counter;
}