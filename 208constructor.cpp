#include <iostream>
using namespace std;

class Bike{
public:
    int tyreSize;
    int engineSize;

    //parameterized constructor
    //used to initialize the value
    Bike(int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout<<"constructor called"<<endl;
    }
};
int main(){
    Bike tvs(12,300);  
    Bike royalEnfield(13,400);
    Bike Honda(15,350);
    cout<<tvs.tyreSize<<endl;
    cout<<Honda.engineSize<<endl;
}
    