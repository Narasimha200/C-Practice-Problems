#include<iostream>
using namespace std;
int recursive_binarySearch(int *arr,int h,int l,int k){
    if(l > h){
        return -1;
    }
    else{
        int mid=(l+h)/2;
        if(arr[mid]==k){
            return mid+1;
        }
        else if(arr[mid] > k){
            return recursive_binarySearch(arr,mid-1,l,k);
        }
        else {
           return recursive_binarySearch(arr,h,mid+1,k);
        }
    }
}
int main(){
    int n=10;
    int k=50;
    int arr[n]={1,9,20,31,42,50,54,84,92,100};
    cout<<"Position  "<<recursive_binarySearch(arr,n,0,k);
}