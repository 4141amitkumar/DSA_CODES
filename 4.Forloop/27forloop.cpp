//Print hello world ‘n’ times. Take ‘n’ as input from user
#include <iostream>
using namespace std;
int main() {
    cout<<"Enter how many times you want to print \"Hello World\":";
    int n;
    cin>>n;
    for (int i=1; i<=n;i++)
    cout<<"Hello World"<<endl;
}