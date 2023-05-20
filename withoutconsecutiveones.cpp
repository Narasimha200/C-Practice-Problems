#include <iostream>
using namespace std;
int count=0;
void permutations(string ans,int n){
    if(ans.size()==n){
        cout<<ans<<" ";
        count++;
        return;
    }
    permutations(ans+'0',n);
    if(ans[ans.size()-1]!='1'){
    permutations(ans+'1',n);
    }
}
int countNotOnes(int N){
    int c0=1;
    int c1=1;
    int temp;
    if(N < 1){
        return 1;
    }
    for(int i=1;i<N;i++){
        temp=c1;
        c1=c0;
        c0=c0+temp;
    }
    return c1+c0;
}
int main(){
    permutations("",2);
    cout<<count<<endl;
    cout<<"CountNoOnes "<<countNotOnes(2)<<endl;
}