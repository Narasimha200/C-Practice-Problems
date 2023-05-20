#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n=6;
    int arr[6]={1,2,4,5,6}; // 1   3 4 5 6
    bool array[n+1]={false};
    for(int i=0;i<n-1;i++){
        array[arr[i]]=true;
    }
    for(int i=1;i<=n;i++){
        if(array[i]==false){
            cout<<i<<endl;
        }
    }
}