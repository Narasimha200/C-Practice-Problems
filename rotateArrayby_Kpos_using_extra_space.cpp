#include<iostream>
#include<algorithm>
using namespace std;
//Approch :-1 taking time:-O(n) and space:-O(n)
// void rotateArray_kPos(int *arr,int n,int d){
//     int temp[n];
//     int k=0;
//     for(int i=d;i<n;i++){
//         temp[k++]=arr[i];
//     }
//     for(int i=0;i<d;i++){
//         temp[k++]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//     }
// }
// Approch:- 2 taking time:-O(n*d) space:-(no space)
// 1 2 3 4 5 6
// 3 4 5 6 1 2
// d=6
// d=d%n
// 2 1 6 5 4 3
void rotateArray_kPos(int *arr,int n,int d){
    int pos=1;
    while(pos<=d){
        for(int i=0;i<n-1;i++){
            swap(arr[i],arr[i+1]);
        }
        pos++;
    }
} 
int main(){
    int n=6;
    // d= no.of Positions
    int d=3;
    int arr[n]={1,2,3,4,5,6};
    rotateArray_kPos(arr,n,d);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}