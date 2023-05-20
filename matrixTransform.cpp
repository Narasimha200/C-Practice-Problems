#include <iostream>
#include <vector>
using namespace std;
vector< vector<int> > matrixTransform(vector<vector<int> > matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n;i++){
        for(int j= i; j < m; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    return matrix;
}
void printMatrix(auto &hello){
    for(int i=0;i<hello.size();i++){
        for(int j=0;j<hello[0].size();j++){
            cout<<hello[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    vector< vector<int> > matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    vector< vector<int> > ans = matrixTransform(matrix);
    cout<<"Before transpose"<<endl;
    printMatrix(matrix);
    cout<<"After transpose"<<endl;
    printMatrix(ans);
}