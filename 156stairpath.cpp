//Stair Path:- What will be the total number of combinations possible to reach the top with stairs, if either one step or 2 step and their combinations is allowed only
#include <iostream>
using namespace std;
int SP(int stairs){
    if(stairs==1) return 1;    //base case         //if there is 1 step, then combination possible is 1.
    if(stairs==2) return 2;    //base case         //if there is 2 step, then combination possible is 2.  (either 2 step or 1,1 step)
    return SP(stairs-1) + SP(stairs-2);
}
int main(){
    int stairs;
    cout<<"Enter the total number of stairs:";
    cin>>stairs;
    cout<<"Total Possible ways is:"<<SP(stairs);
}