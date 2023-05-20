#include<iostream>
using namespace std;
int minMaxDifference(int num) {
    char min='9';
    char max='0';
    int maxvalue;
    int minvalue;
    string nums=to_string(num);
    for(int i=0;i<nums.size();i++){
        if(nums[i] > max){
            max=nums[i];
        }
        if(nums[i] < min){
            min=nums[i];
        }
    }
    cout<<"max"<<max<<endl;
    cout<<"min"<<min<<endl;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==max){
            nums[i]='0';
        }
    }
    minvalue=stoi(nums);
    cout<<"minvalue"<<minvalue<<endl;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==min){
            nums[i]='9';
        }
    }
    maxvalue=stoi(nums);
    cout<<minvalue<<endl;
    cout<<maxvalue<<endl;
    return maxvalue-minvalue;
}
int main(){
    int num=11891;
    cout<<minMaxDifference(num);

}