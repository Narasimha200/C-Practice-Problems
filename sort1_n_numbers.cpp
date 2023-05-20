#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int k=0;
    int n=10;
    int arr[n]={1,9,8,7,5,6,4,2,3,10};
    for(int i=0;i<n-1;i++){
        if(arr[k]-1 == i){
            k++;
        }
        else{
            swap(arr[k],arr[arr[k]-1]);
            i--;
        }
    }
    printarray(arr,n);
}