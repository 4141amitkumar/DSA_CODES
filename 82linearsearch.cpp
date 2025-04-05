//Linear search
//Ques : Find the element x in the array . Take array and x as input.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    cout<<"Enter array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search:";
    int x;
    cin>>x;
    int flag=0;
    for (int i=0;i<n;i++){
        if (arr[i]==x){
            flag=1;            //jab aisa ho ki finally dekhna ho ki kabhi if statement chala ki nhi pure loop me then flag lagao

        }
    }
    if (flag==1) cout<<"Element found"<<endl;
    else cout<<"Element not found";
}