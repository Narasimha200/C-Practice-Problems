#include<iostream>
using namespace std;
void computeprefix(string &s,int prefix[]){
    int m=s.size();
    prefix[0]=0;
    int len=0,i=1;
    while(i<m){
        if(s[len]==s[i]){
            len++;
            prefix[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=prefix[len-1];
            }
            else{
                prefix[i]=0;
                i++;
            }
        }
    }
}
void searchPattern(string &s,string &pattern){
    int m=pattern.size();
    int prefix[m];
    int i=0,j=0;
    computeprefix(pattern,prefix);
    while(i <s.size()){
        if(s[i]==pattern[j]){
            i++;
            j++;
        }
        if(j==pattern.size()){
            cout<<"Pattern found At "<<i-j<<endl;
            j=prefix[j-1];
        }
        else if(i < s.size() && s[i]!=pattern[j]){
            if(j!=0){
                j=prefix[j-1];
            }
            else{
                i=i+1;
            }
        }
    }

}
int main(){
    string s="AAACAAAA";
    string pattern="AAA";
    searchPattern(s,pattern);
    return 0;
}