#include <iostream>
#include <string>
using namespace std;
int main(){
    string str("Hello  wor ld");
    for(int j=0;j<str.size();){
        if(str[j]==' '){
            str.erase(str.begin()+j);
        }
        else{
            j++;
        }
    }
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
    }
}