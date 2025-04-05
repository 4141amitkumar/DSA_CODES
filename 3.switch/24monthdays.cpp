#include <iostream>
using namespace std;
int main(){
    cout<<"Enter month number:";
    int x;
    cin>>x;
    switch((x<=7 && x%2!=0) || (x>=8 && x%2==0)){
        case 1:
          cout<<"31 days";
          break;
    }
    switch(x==4 || x==6 || x==9 || x==11){   //aise bhi likh do, ya koi condition daalna hai to wo bhi kar lo no problem
        case 1:
        cout<<"30 days";
        break;
    }
    switch (x){
        case 2:
        cout<<"28/29 days";
    }
}