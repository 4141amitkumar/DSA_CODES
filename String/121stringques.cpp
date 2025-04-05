//Input a string of size n and Update all the even positions in the string to character ‘a’. Consider 0-based indexing.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    char str[n];
    cout<<"Enter string:";
    for (int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0; i<n;i++){
        if (i%2==0) str[i]='a';
    }
    cout<<str;
}