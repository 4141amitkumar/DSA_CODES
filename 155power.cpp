//Power function (logarithmic)
//***** Important/ GOOD QUESTION and Concept */
#include <iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    int ans = power(a,b/2);    //store this value in ans variable, so that we dont have to call the function twice for multiplying
    if(b%2==0) return ans*ans;
    else return a*ans*ans;
}
int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Answer is:"<<power(a,b);
}

//T.C. of this code is improved to O(logn);