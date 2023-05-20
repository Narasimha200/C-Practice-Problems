#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={2,3,1,2,3};
    for(int i=0;i<5;i++){
        if(arr[abs(arr[i])]<0){
            cout<<abs(arr[i])<<endl;
        }
        else{
            arr[arr[i]]=-arr[arr[i]];
        }
    }
}