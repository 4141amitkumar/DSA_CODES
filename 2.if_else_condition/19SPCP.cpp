//If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he
//made or loss he incurred.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the Cost Price of Item:";
    int x;
    cin>>x;
    cout<<"Enter the Selling Price of Item:";
    int y;
    cin>>y;
    if (x>y){
        cout<<"The seller has undergone loss.";
        int loss=x-y;
        cout<<"The loss is:"<<loss;
    }
    else if (x<y){
        cout<<"The seller has undergone gain.";
        int gain=y-x;
        cout<<"The gain is:"<<gain;
    }
    else{
        cout<<"Neither gain nor loss.";
    }
}