#include<iostream>
using namespace std;
int linearSearch(int *a,int n,int k){
    if(n==0){
        return -1;
    }
    if(a[n-1]==k){
        return n;
    }
    return linearSearch(a,n-1,k);
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<linearSearch(arr,10,1);
}