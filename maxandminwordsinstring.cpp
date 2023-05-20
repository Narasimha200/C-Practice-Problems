#include <iostream>
#include <string>
using namespace std;
void maxword(string &s){
    int maxlen=0;
    int start;
    int len=0;
    int startmin=0;
    int minlen=100;
    for(int i=0;i<=s.size();i++){
        if(s[i]==' ' || s[i]=='\0'){
            if((i-len) > maxlen){
                maxlen=i-len;
                start=len;
            }
            if((i-len) < minlen){
                minlen=i-len;
                startmin=len;
            }
            len=i+1;
        }
    }
    cout<<"Maxword : ";
    for(int i=start;i<start+maxlen;i++){
        cout<<s[i];
    }
    cout<<endl;
    for(int i=startmin;i<startmin+minlen;i++){
        cout<<s[i];
    }

}
int main(){
    string s="ABC AnE FFG Euu LKLMjjj LK";
    cin >> s;
    maxword(s);
}
