//Maze Path:- Directions allowed right and down only(and initial point is top left corner and final point is bottom right corner of maze)
#include <iostream>
using namespace std;
int MP(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;      //if it doesn't reaches destination add 0 in the total number of combinations
    if(sr==er && sc==ec) return 1;    //if reaches destination add 1 in the total number of combinations
    int rightways = MP(sr, sc+1,er,ec);
    int downways = MP(sr+1, sc,er,ec);
    return rightways + downways;
}

//A separate function for printing the path of all the possible path.
void print_path(int sr, int sc, int er, int ec,string s){
    if(sr>er || sc>ec) return;      
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }  
    print_path(sr, sc+1,er,ec, s+'R')  ;
    print_path(sr+1, sc,er,ec, s+'D');
}
int main(){
    int er,ec;
    cout<<"Enter the number of rows";
    cin>>er;
    cout<<"Enter the number of columns";
    cin>>ec;
    cout<<"Total Possible ways is:"<<MP(0,0,er,ec)<<endl;
    string s;
    print_path(0,0,er,ec,s);
}