// Create a class "cricketer" that contains name of cricketer, his age, number of test matches that he has played 
// and the average runs that he has scored in each test match. Create an array of data type "cricketer" 
// to hold records of 20 such cricketers and then write a program to read these records

#include <iostream>
#include <vector>
using namespace std;
class Cricketer{
    public:
      string name;
      int age;
      int noOfTestMatches;
      int averageScore;
};
int main(){
    vector<Cricketer> cricketers(20);
    Cricketer Virat;
    Virat.name='Virat Kohli';
    Virat.age=30;
    Virat.noOfTestMatches = 100;
    Virat.averageScore = 80;

    Cricketer Dhoni;
    Dhoni.name = 'MS Dhoni';
    Dhoni.age = 40;
    Dhoni.noOfTestMatches = 80;
    Dhoni.averageScore=40;

    cricketers[0] = Virat;
    cricketers[1] = Dhoni;

    for (int i = 2; i < 20; i++) {
        Cricketer cricketer;
        cout << "Enter details for cricketer " << i + 1 << endl;
        cout << "Name: ";
        cin.ignore(); // To clear the input buffer
        getline(cin, cricketer.name);
        cout << "Age: ";
        cin >> cricketer.age;
        cout << "Number of Test Matches: ";
        cin >> cricketer.noOfTestMatches;
        cout << "Average Score: ";
        cin >> cricketer.averageScore;
        cricketers[i] = cricketer;
    }

    // Output all cricketers' details
    for (int i = 0; i < 20; i++) {
        cout << "\nCricketer " << i + 1 << ": " << endl;
        cout << "Name: " << cricketers[i].name << endl;
        cout << "Age: " << cricketers[i].age << endl;
        cout << "Number of Test Matches: " << cricketers[i].noOfTestMatches << endl;
        cout << "Average Score: " << cricketers[i].averageScore << endl;
    }

    return 0;
}