#include<iostream>
#include<string>
using namespace std;
const int N=1e3;
int mat[N][N];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin>>str;
        for(int i = 0;i < N;i++){
            for(int j =0; j <N;j++){
                for(int k=0;k<n;k++){
                    switch(str[k]){
                        case 'U':mat[i--][j];
                        break;
                        case 'D':mat[i++][j];
                        break;
                        case 'R':mat[i][j++];
                        break;
                        case 'L':mat[i][j--];
                    }
                    if(i==1 && j==1){
                        cout<<"Yes"<<endl;
                        break;
                    }
                }
            }
        }
    }
}