#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int count = 0;
        int n; cin >> n;
        int k; cin >> k;
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i]=='?')
                continue;
            for(int j = i+1; j < n; j++){
                if(s[i] == s[j] && k > 0){
                        k--;
                        count++;
                        s[j]='?';
                        break;
                }
                else if(s[i]==s[j]+32 || s[i]==s[j]-32){
                    count++;
                    s[j]='?';
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}