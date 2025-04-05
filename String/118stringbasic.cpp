#include <iostream>
using namespace std;
int main(){
    char str[]={'a','b','c','d','e'};
    cout<<str<<endl;
    char str2[]={'a','b','\0','d','e'};
    cout<<str2<<endl;
    char str3[]={'a','b','c','d','e'};
    for(int i=0; str3[i]!=0;i++){
        cout<<str3[i]<<" ";
    }
}