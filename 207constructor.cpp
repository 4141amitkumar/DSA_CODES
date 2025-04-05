#include <iostream>
using namespace std;

class Bike{
public:
    int tyreSize;

    //default constructor
    Bike(){
        cout<<"constructor called"<<endl;
    }
};
int main(){
    Bike tvs;  //object creation ,  constructor ko call jayegii
    Bike honda;
    Bike royalEnfield;
    //jitni baar object create hoga, utni baar constructor call hoga
}