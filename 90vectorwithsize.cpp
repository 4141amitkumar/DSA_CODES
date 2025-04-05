#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(5);
    cout<<"Size is:"<<v.size()<<endl;
    cout<<"Capacity is:"<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector <int> v1(5,7);        //iska matlab hai ki vector ka initial size 5 hai aur sabhi elements ka value 7 hai
    cout<<"Size is:"<<v1.size()<<endl;
    cout<<"Capacity is:"<<v1.capacity()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}