#include <iostream>
using namespace std;
static void recursive(int n){
    int count;
    if(n < 0){
        cout<<count<<endl;
        return;
    }
     count = count + 1;
    count = count + 1;
    recursive(n-1);
}
int main(){
    recursive(10);
    return 0;
}