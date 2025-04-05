#include <iostream>
using namespace std;
class Player{
    private:
    int score;   //data members
    int health;

    public:
    //setter
    void setScore(int s){   //member function
    cout<<"Score is setting"<<endl;
        score = s;    
    }
    void setHealth(int h){
        health = h;
    }

    //getter
    int getScore(){
        cout<<"Score is getting"<<endl;
        return score;
    }
    int getHealth(){
        return health;
    }
};

int main(){
    Player harsh;
    harsh.setScore(100);
    cout<<harsh.getScore()<<endl;
    harsh.setHealth(50);
    cout<<harsh.getHealth();
}
