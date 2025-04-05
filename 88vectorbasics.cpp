#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;      //you don't need to mention the size of the vector
    v.push_back(6);      //v[0]=6 aise nhi kar skte value insert, but hn ek baar insert krne k baad aise update kar skte ho
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v[0]=7;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;

}