#include <iostream>
#include <string>
using namespace std;
void subsequence(string &ans,int len=1){
    if(len > ans.length()){
        return;
    }
    for(int i=0;i<ans.size()-len+1;i++){
        cout<<ans.substr(i,len)<<endl;
    }
    subsequence(ans,++len);
}
int main(){
    string ans="abc";
    subsequence(ans);
}