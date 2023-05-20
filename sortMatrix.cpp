#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int size = 10;
vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    int temp[N*N];
    int k = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N ; j++){
            temp[k++] = Mat[i][j];
        }
    }
    sort(temp,temp+N*N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            Mat[i][j] = temp[--k];
        }
    }
    return Mat;
}
void sortMatrix(int mat[][size],int n){
    int temp[n*n];
    int k = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp[k++] = mat[i][j];
        }
    }
    sort(temp,temp+n*n);
    k=0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mat[i][j] = temp[k++];
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
    int mat[size][size] = {{5, 1, 9},{2, 8, 3},{4, 6, 7}};
    cout <<" Before Sort " << endl;
    printMat(mat,n);
    sortMatrix(mat,n);
    cout <<" After Sorting "<<endl;
    printMat(mat,n);
}