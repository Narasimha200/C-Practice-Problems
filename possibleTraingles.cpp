// Note:- sum of any two values(sides) must be greater than third value(sides)
// This is arr[i]+arr[j] > arr[k]
//               &&
//          arr[j]+arr[k] > arr[i]
//                &&
//            arr[i]+arr[k] > arr[j]
//   This is for every two sides must be greater than third element
#include <iostream>
using namespace std;
int countTraingles(int *arr,int n){
    int count=0;
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                if(arr[i]+arr[j] > arr[k] && arr[j]+arr[k] > arr[i] && arr[i]+arr[k] > arr[j]){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int arr[7] = {10,21,22,100,101,200,300};
    cout<<countTraingles(arr,7)<<endl;
    return 0;
}