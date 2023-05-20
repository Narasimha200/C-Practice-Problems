#include <iostream>
#include <string>
using namespace std;
void multiplyString(string &str1,string &str2){
    int len1=str1.size();
    int len2=str2.size();
    int temp[len1+len2] = {0};
    int i1=0,j1=0;
    for(int i = len1-1; i >= 0; --i){
        int n1 = str1[i]-'0';
        j1=0;
        int carry = 0;
        for(int j = len2-1; j >= 0; --j){
            int n2 = str2[j]-'0';
            int sum = n1 * n2 + temp[i1+j1] + carry;
            carry = sum / 10;
            temp[i1+j1] = sum % 10;
            ++j1;
        }
        if(carry > 0){
            temp[i1+j1] = carry;
        }
        ++i1;
    }
    int i = len1+len2-1;
    while(!temp[i]){
        --i;
    }
    string ans;
    for(int j=i;j>=0;j--){
        ans.push_back(temp[j]+'0');
    }
    cout<<ans<<endl;
    
}
int main(){
    string str1,str2;
    cin>> str1 >> str2;
    multiplyString(str1,str2);
}