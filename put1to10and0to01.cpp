#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void generateBinary(int m,string &binary){
    while(m > 0){
        int remainder=m%2;
        binary.push_back(remainder+'0');   
        m=m/2;
    }
    reverse(binary.begin(),binary.end());
}
char rearrange(int m,int n,int pos){
    string binary;
    string ans;
    generateBinary(m,binary);
    while(n--){
        for(int i=0;i<binary.size();i++){
            if(binary[i]=='1'){
                ans.append("10");
            }
            if(binary[i]=='0'){
                ans.append("01");
            }
        }
        binary=ans;
        ans="";
    }
    return binary[pos];
}
int main(){
    int m;
    cin >> m;
    int n;
    cin >> n;
    int pos;
    cin >> pos;
    char ans=rearrange(m,n,pos);
    cout<<ans<<"--"<<endl;
}