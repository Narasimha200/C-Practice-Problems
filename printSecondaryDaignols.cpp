#include <iostream>
using namespace std;
const int MAX = 100;
void secondaryDaignols(int arr[][MAX],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i][n-1-i] << endl;
    }
}
int main(){
    int n=3;
    int arr[][MAX] = {{1,2,3},{4,5,6},{7,8,9}};
    secondaryDaignols(arr,n);
}