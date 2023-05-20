#include <iostream>
#include <string>
using namespace std;
int main(){
    string ans = "raavz";
    if(ans.empty()){
        cout<<"a"<<endl;
        return 0;
    }
    int i;
    for(i = ans.size()-1; i >= 0; i--){
        if(ans[i] < 'z'){
            ans[i] = ans[i] + 1;
            break;
        }
    }
    if(i==-1){
        ans.push_back('a');
    }
    cout<<ans<<endl;
}