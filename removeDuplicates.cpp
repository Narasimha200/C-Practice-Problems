#include <iostream>
#include<algorithm>
using namespace std;
void removeDuplicates(int *arr,int n){
    sort(arr,arr+n);
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int n; cin >> n;
    int arr[n]; for(int i = 0; i < n; i++) { cin >> arr[i]; }
    removeDuplicates(arr,n);
}