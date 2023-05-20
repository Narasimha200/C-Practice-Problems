#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check(){
    int n;
    cin >> n;
    string s=to_string(n);
    sort(s.begin(),s.end());
    if(s[0]!=s[1] || s[s.size()-1]!=s[s.size()-2]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    check();
}