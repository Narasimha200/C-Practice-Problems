#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void kthnon_repeate(string &ans){
    int k=3;
    int count[256];
    int index[256];
    for(int i=0;i<256;i++){
        count[i]=0;
        index[i]=ans.size();
    }
    for(int i=0;i<ans.size();i++){
        ++count[ans[i]];
        if(count[ans[i]]==1){
            index[ans[i]]=i;
        }
        if(count[ans[i]]==2){
            index[ans[i]]=ans.size();
        }
    }
    sort(index,index+256);
    cout<<ans[index[k-1]]<<endl;
}
int main(){
    string ans="geeksforgeeks";
    kthnon_repeate(ans);
}