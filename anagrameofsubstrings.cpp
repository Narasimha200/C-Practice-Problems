#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isAnagram(string &str1,string str2){
    int n1 = str1.size();
    cout<<n1<<endl;
    int n2 = str2.size();
    cout<<"hewe"<<endl;
    cout<<n2;
    cout<<"we"<<endl;
    if(n1 != n2){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str1.begin(),str2.end());
    int i = 0;
    while(i < n1){
        if(str1[i]!=str2[i]){
            return false;
        }
        i++;
    }
    return true;
}
int subAnagram(string &str){
    int count=0;
    int n = str.size();
    int psize = n*(n+1)/2;
    string substrs[psize];
    int k = 0;
    for(int len = 1; len <= n; len++){
        for(int i = 0; i <= n-len; i++){
            string ans;
            for(int j = i; j <= (i+len-1); j++){
                ans.push_back(str[j]);
            }
            // ans.push_back('\0');
            substrs[k++] = ans;
        }
    }
    for(int i=0;i<psize;i++){
        for(int j=i+1;j<psize;j++){
            cout<<"hello"<<endl;
            if(isAnagram(substrs[i],substrs[j])){
                count++;
            }
        }
    }
}

int main(){
    string str = "XYYX";
    subAnagram(str);
    return 0;
}