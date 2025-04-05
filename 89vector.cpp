#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;      
    v.push_back(6);      
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);      
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size is:"<<v.size()<<endl;
    cout<<"Capacity is:"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size is:"<<v.size()<<endl;
    cout<<"Capacity is:"<<v.capacity();            //pop_back me capacity kum nhi hota hai, for example yahan 8 capacity me bhi ho jata, but capacity is 16


}