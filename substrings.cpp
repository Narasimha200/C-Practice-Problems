#include <iostream>
#include <string>
using namespace std;
void substring(string &s){
    int n = s.size();
    for(int len = 1; len <= n; len++){
        for(int i = 0; i<=n-len; i++){
            int j = i+len-1;
            for(int k=i; k<=j; k++){
                cout<<s[k];
            }
            cout<<endl;
        }
    }
}
int main(){
    string s="abcd";
    substring(s);
}