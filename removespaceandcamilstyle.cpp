#include <iostream>
using namespace std;
void removespace(string &s){
    int last=0,i=0;
    while(i < s.size()){
        if(s[i]==' '){
            s[last++]=s[i+1]-32;
            i=i+2;
        }
        else{
            s[last++]=s[i++];
        }
    }
    cout<<s.substr(0,last);
}
int main(){
    string s="Here comes the garden";
    removespace(s);
}