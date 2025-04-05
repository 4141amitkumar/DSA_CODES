//Find the last occurrence of x in the array.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    cout<<"No of elements:";
    int n;
    cin>>n;
    cout<<"Enter the elements:";
    for (int i=0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);                    //aise karte hain insert dhyaan do*****************
    }
    cout<<"Enter the element you want the last occurrence of:";
    int x,search=-1; cin>>x;                    //search=-1 kiye kyunki agar present na ho to y eprint karegaa
    for (int i=0;i<n;i++){
        if (v[i]==x) search=i;
    }
    cout<<"Index of the last occurrence of "<<x<<" is:"<<search;
}

//second method     for(int i=n-1; i>=0;i--){
//                        if(v[i]==x){
//                            search=i;
//                              break;}}
//mtlb peeche se jo bhi pahla hai bs uss index ko puch rhe hain