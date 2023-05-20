#include<iostream>
using namespace std;
int main(){
    string check="codeforces";
    int t;
    cin >> t;
    while(t--){
        bool flag=false;
        char a;
        cin >> a;
        for(int i=0;i<check.size();i++){
            if(check[i]==a){
                flag=true;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}