#include<iostream>
using namespace std;
int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0; i < 3; i++){
        cout<<matrix[i][i]<<endl;
    }
    return 0;
}