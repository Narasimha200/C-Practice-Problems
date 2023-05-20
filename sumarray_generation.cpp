#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void subArrays(int *arr,int n,int start,int end){
    if(start > n-1){
        return;
    }
    else if(end > n-1){
        start++;
        subArrays(arr,n,start,start);
    }
    else{
        for(int i=start; i<= end; i++){
            cout<<arr[i];
        }
        cout<<endl;
        subArrays(arr,n,start,end++);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    subArrays(arr,n,0,0);
}
