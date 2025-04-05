#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(5);            //agar size of vector pahle se initialize hai tab to normal jaise array me input lete the waise hi lelo
    for (int i=0;i<5;i++){
        cin>>v[i];
    }
    for (int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

//ab dekhte hain ki agar size declare nhi kiye hue hai to kaise karenge....normally bhi humlog v.push_back krke karte the, hn but wo user input nhi hota tha

   vector <int> v1;  
   cout<<"Enter size of vector:";     
   int n;
   cin>>n; 
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for (int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    } 
}