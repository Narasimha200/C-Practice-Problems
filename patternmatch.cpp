#include<iostream>
#include<string>
using namespace std;
int main(){
    string text="ABABDABACDABABCABAB";
    string pattern="ABABCABAB";
    for(int i=0;i<=text.size()-pattern.size();i++){
        bool flag=true;
        int top=i;
        int low=0;
        while(low < pattern.size()){
            if(text[top]!=pattern[low]){
                flag=false;
                break;
            }
            top++;
            low++;
        }
        if(flag){
            cout<<"Patternfoundat "<<i+1<<endl;
        }
    }
}