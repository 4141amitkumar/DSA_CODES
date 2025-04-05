#include <iostream>
#include<unordered_set>  //header file for set
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    //for each loop
    for(int ele : s){      //for each element in s
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<s.size();   //it stores unique elements only

    s.erase(2);   //to delete that element from the set
    cout<<endl;
    cout<<endl;
    for(int ele : s){      //for each element in s
        cout<<ele<<" ";
    }
}