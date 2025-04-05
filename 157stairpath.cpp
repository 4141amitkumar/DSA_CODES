//Stair Path:- same as previous, only here is 3 steps is also possible
#include <iostream>
using namespace std;
int SP(int stairs){
    if(stairs==1) return 1;    //base case         //if there is 1 step, then combination possible is 1.
    if(stairs==2) return 2;    //base case         //if there is 2 step, then combination possible is 2.  (either 2 step or 1,1 step)
    if(stairs==3) return 4;
    return SP(stairs-1) + SP(stairs-2) + SP(stairs-3);
}
int main(){
    int stairs;
    cout<<"Enter the total number of stairs:";
    cin>>stairs;
    cout<<"Total Possible ways is:"<<SP(stairs);
}