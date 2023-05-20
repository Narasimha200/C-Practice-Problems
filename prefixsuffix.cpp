#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> pss;
        for(int i = 0; i < 2*n-2;i++){
            string s;
            cin >> s;
            if(s.length()==n-1){
                pss.push_back(s);
            }
        }
        reverse(pss[1].begin(),pss[1].end());
        if(pss[1]==pss[0]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}