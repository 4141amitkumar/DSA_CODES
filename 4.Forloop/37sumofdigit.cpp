//WAP to print sum of digits of a given number.
#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the number:";
    int x;
    cin>>x;
    int sum=0;
    while(x>0){
        sum+=x%10;
        x=x/10;
    }
    cout<<"Sum is:"<<sum;
}