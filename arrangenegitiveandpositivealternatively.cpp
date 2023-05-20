#include<iostream>
using namespace std;
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10] = {1, -10, -20, 56, 12, -1, -99, 56, 67, 50};
    int i = -1;
    int j = 0;
    while(j < 10){
        if(arr[j] < 0){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    printArray(arr,10);
    int pos = i+1;
    int neg = 0;
    while(pos < 10 && neg < pos){
        swap(arr[neg],arr[pos]);
        neg=neg+2;
        pos=pos+1;
    }
    printArray(arr,10);
}