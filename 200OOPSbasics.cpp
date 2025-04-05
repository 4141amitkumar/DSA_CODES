#include<iostream>
using namespace std;
class Player{
    public:
    int score;   //data member
    int health;  //member function

    void showHealth(){
        cout<<"Health is:"<<health;
    }
};
int main(){
    
    Player amit;
    amit.score = 90;
    amit.health = 100;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;
    amit.showHealth();
    cout<<endl;

    Player harsh;
    harsh.score = 85;
    harsh.health = 90;
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;
}