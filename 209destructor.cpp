#include <iostream>
using namespace std;

class Bike{
public:
    int tyreSize;
    int engineSize;

    Bike(int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout<<"constructor called"<<endl;
    }
    ~Bike(){
        cout<<"destructor is called"<<endl;
    }
};
int main(){
    Bike tvs(12,300);  
    Bike royalEnfield(13,400);
    Bike Honda(15,350);
    bool flag = true;
    if(flag==true){
        Bike bmw(17,500);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }
    cout<<tvs.tyreSize<<endl;
    cout<<Honda.engineSize<<endl;
}
    