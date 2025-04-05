//Create a class 'book' with name, price and number of pages as its attribute. The class should contain following member functions:
//countBooks(int price): This function will return count of all the books that have a price less than the given price.
//isBookPresent(string title): This will return a boolean value indicating whether any book with the given title is present.

#include <iostream>
using namespace std;
class book{
private:
    char name;
    int price;
    int pages;
public:
    void setname(char n){
        name = n;
    }
    void setprice(int pr){
        price=pr;
    }
    void setpages(int pages){
        this->pages=pages;
    }
    int count=0;
    int countBooks(int p){
        if(price<p) count++;
        return count;
    }
    bool isBookPresent(char title){
        if (title==name) return true;
        else return false;
    }

};
int main(){
    book HarryPotter;
    HarryPotter.setname('H');
    HarryPotter.setprice(1000);
    HarryPotter.setpages(776);
    cout<<HarryPotter.countBooks(1200)<<endl;
    cout<<HarryPotter.isBookPresent('H');
}