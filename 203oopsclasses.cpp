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
    Player harsh;
    Player raghav;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setisAlive(true);
    harsh.setHealth(70);

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setisAlive(true);
    raghav.setHealth(100);

    cout<<add(10,12)<<endl;
    cout<<addScore(harsh,raghav)<<endl;
    Player winner = getMaxScorePlayer(harsh, raghav);
    cout<<winner.getScore();
}