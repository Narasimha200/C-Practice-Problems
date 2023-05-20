#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "abaaieccowowwwieejfkslncmxkdjwodhfhawxzqqqif";
    string ans;
    int freq[26]={0};
    for(int i = 0;i < 26;i++){
        freq[s[i]-'a']++;
    }
    for(int i = 0; i < 26;i++){
        if(freq[i]!=0){
            char a = i+'a';
            ans.push_back(a);
            ans.push_back((char)(freq[i]));
        }
    }
    cout<<ans<<endl;
}