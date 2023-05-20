#include <iostream>
using namespace std;
void removeDuplicates(int *arr,int n){
    bool flag;
    for(int i=0;i<n;i++){
        flag = false;
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                flag = true;
                break;
            }
        }
        if(!flag)cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n]; for(int i=0;i<n;i++){cin>>arr[i];}
    removeDuplicates(arr,n);
    return 0;
}