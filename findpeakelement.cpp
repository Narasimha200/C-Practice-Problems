#include<iostream>
#include<climits>
using namespace std;
void peakElement(int *arr,int n){
    if(n==0){
        return;
    }
    int mid=n/2;
    peakElement(arr,mid);
    if(arr[n]>=arr[n+1] && arr[n]<=arr[n-1]){
        cout<<arr[n]<<endl;
        return;
    }
}
int main(){
    int n=6;
    int arr[n]={1,6,3,2,7,4};
    arr[n]=INT_MIN;
    arr[-1]=INT_MIN;
    peakElement(arr,n-1);
    return 0;
}