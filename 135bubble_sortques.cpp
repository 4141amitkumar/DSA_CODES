//Sort a string in decreasing order of values associated after removal of values smaller than x
// ********************** GOOD QUESTION *****************************
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void bubble_sort(string &v){
    int n = v.size();
    bool flag = true;  
    for (int i=0; i<n-1;i++){    
        for(int k=0;k<n-1-i;k++){                    
            if (v[k]>v[k+1]) flag = false;
        }    
        if (flag==true) break;       
        for(int j=0; j<n-1-i;j++) { 
            if (v[j]>v[j+1]) {
                char temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        } 
    }
}
int main(){
    vector <string> v1 = {"abczyxcvzyxtydhxz"};
    vector <string> v2(1);
    for (int i=0;i<v1[0].size();i++){
        if ((v1[0])[i] >= 'x') v2[0].push_back((v1[0])[i]);
    }
    cout<<endl;
    bubble_sort(v2[0]);
    for(int i=0;i<v2[0].size();i++){
        cout<<(v2[0])[i]<<" ";
    }
}