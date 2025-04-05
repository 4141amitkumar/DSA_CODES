#include <iostream>
using namespace std;

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }

    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    bool setisAlive(bool alive){
        this->alive = alive;
    }
};

int add(int a, int b){
    return (a+b);
}
int addScore(Player a1, Player b1){
    return a1.getScore()+b1.getScore();
}

// Good concept
Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore()>b.getScore()){
        return a;
    }
    else return b;
}
int main(){
    Player harsh;    //object creation, statically.
    Player raghav;   //compile time, static allocation

    Player *urvi = new Player;     //it is pointer to object........run time, dynamic allocation
    Player urviObj = *urvi;

    // urvi points to a dynamically allocated object on the heap.
    // urviObj is a stack-allocated object that is a copy of the object urvi points to. The two objects are independent of each other.

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setisAlive(true);
    harsh.setHealth(70);

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setisAlive(true);
    raghav.setHealth(100);


    //urvi->setScore(40);      this will give error, because it's not an object

    urviObj.setScore(40);
    urviObj.setAge(90);

    urvi->setHealth(20);  //same as (*urvi).setHealth(20)
    cout<<urvi->getHealth()<<endl;

    cout<<urviObj.getScore()<<endl;

    cout<<add(10,12)<<endl;
    cout<<addScore(harsh,raghav)<<endl;
    Player winner = getMaxScorePlayer(harsh, raghav);
    cout<<winner.getScore();
}