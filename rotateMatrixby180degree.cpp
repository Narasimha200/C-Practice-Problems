// to rotate matrix or grid by 180 degree
#include <iostream>
using namespace std;
const int size = 10;
void rotateby180(int matrix[][size],int n){
    int temp[n*n];
    int k = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp[k++]=matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            matrix[i][j] = temp[--k];
        }
    }
}
void printMat(int mat[][size],int n){
    for(int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cout <<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int n = 3;
    int matrix[][size] = {{1,2,3},{4,5,6},{7,8,9}};
    rotateby180(matrix,n);
    cout << "After rotating by 180 degrees" << endl;
    printMat(matrix,n);
}