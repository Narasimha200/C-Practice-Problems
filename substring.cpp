#include <iostream>
#include <iostream>
using namespace std;
void substring(string &s){
    int n=s.size();
    for(int len=1;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            cout<<s.substr(i,len)<<endl;
        }
    }
}
void substringn(string &s){
    int n=s.size();
    for(int i = 0;i < n; i++){
        string ans;
        for(int j = i; j < n;j++){
            ans.push_back(s[j]);
            cout<<ans<<endl;
        }
    }
}
int main(){
    string s="abcd";
    // substring(s);
    substringn(s);
}