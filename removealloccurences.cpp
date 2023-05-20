#include <iostream>
#include <string>
using namespace std;
string removealloccurence(string &s,char a,int i=0){
    if(i < s.size()){
        if(s[i]==a){
            s.erase(s.begin()+i);
            removealloccurence(s,a,i);
        }
        else{
            removealloccurence(s,a,++i);
        }
    }
    return s;
}
int main(){
    string s="geeksforgeeks";
    char a='e';
    string ans=removealloccurence(s,a);
    cout<<ans<<endl;
}