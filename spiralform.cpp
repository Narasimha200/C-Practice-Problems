#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void spiralForm(vector< vector<int> > &v){
    int row_start = 0;
    int row_end = v.size()-1;
    int col_start = 0;
    int col_end = v[0].size()-1;
    // cout<<row_start<<" "<<row_end<<endl;
    // cout<<col_start<<" "<<col_end<<endl;
    while(row_start<=row_end && col_start <= col_end){
        for(int col = col_start; col <= col_end; col++){
            cout << v[row_start][col]<<" ";
        }
        row_start++;
        for(int row = row_start; row <= row_end; row++){
            cout << v[row][col_end]<<" ";
        }
        col_end--;
        if(row_start<=row_end){
        for(int col = col_end; col >= col_start; col--){
            cout << v[row_end][col]<<" ";
        }
        }
        row_end--;
        if(col_start<=col_end){
        for(int row = row_end; row >= row_start; row--){
            cout<< v[row][col_start]<<" ";
        }
        }
        col_start++;
    }
}
void print(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    cout<<endl;
}
int main(){
    int n,m; cin >> n >> m;
    vector< vector<int> > arr;
    for(int i = 0; i < n ; i++){
        vector<int> temp;
        for(int j = 0; j < m; j++){
            int x;  cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    cout<<endl;
    // for(int i = 0; i < n; i++){
    //     print(arr[i]);
    // }
    spiralForm(arr);
}