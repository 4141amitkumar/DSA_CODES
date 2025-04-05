//Push zeroes to end while maintaining the relative order of other elements
//we don't have to disturb relative error, so use bubble sorting algo
#include <iostream>
#include <vector>
using namespace std;
void zero_to_last(vector <int> &v){
    int n = v.size();
    bool flag = true;  
    for (int i=0; i<n-1;i++){    
        for(int k=0;k<n-1-i;k++){                    
            if (v[k]==0) {flag = false;
            break;}
        }    
        if (flag==true) break;       
        for(int j=0; j<n-1-i;j++) { 
            if (v[j]==0) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        } 
    }
}
int main(){
    vector <int> v1 = {1,0,21,1,0,32,0,13,0,23,0,6121,1,2,5,2,0,0,1};
    zero_to_last(v1);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}