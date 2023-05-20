#include<iostream>
using namespace std;
int maxsize=-1;
void isPalindrome(string &s){
    int start;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            bool flag=true;
            for(int k=0;k<(j-i+1)/2;k++){  // 0 1 2 3 4  
                if(s[i+k]!=s[j-k]){
                    flag=false;
                }
            }
            if(flag && (j-i+1) > maxsize){
                start=i;
                maxsize=max(maxsize,j-i+1);
            }
        }
    }
    cout<<maxsize<<endl;
    for(int k=start;k<start+maxsize;k++){
        cout<<s[k];
    }
}
int main(){
    string s;
    cin>>s;
    isPalindrome(s);
    return 0;
}