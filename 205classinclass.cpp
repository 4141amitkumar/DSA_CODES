#include <iostream>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};
class Player{
private:
class Helmet{
        int hp;
        int level;

        public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }

        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

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
    Gun getGun(){
        return gun;
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

    void setGun(Gun gun){
        this->gun = gun;
    }


    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet-> setLevel(level);
        int health = 0;

        if (level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=100;
        else cout<<"error";

        helmet->setHp(health);
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

    Gun AK;
    AK.ammo=100;
    AK.damage=50;
    AK.scope=2;

    Gun awm;
    awm.ammo = 15;
    awm.damage = 200;
    awm.scope = 8;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setisAlive(true);
    harsh.setHealth(70);
    harsh.setGun(AK);
    harsh.setHelmet(2);

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setisAlive(true);
    raghav.setHealth(100);
    raghav.setGun(awm);
    raghav.setHelmet(3);

    Gun gun123 = raghav.getGun();
    cout<<gun123.damage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;

    cout<<add(10,12)<<endl;
    cout<<addScore(harsh,raghav)<<endl;
    Player winner = getMaxScorePlayer(harsh, raghav);
    cout<<winner.getScore()<<endl;

    Player players[3]={harsh, raghav};
    cout<<players[0].getAge();
}