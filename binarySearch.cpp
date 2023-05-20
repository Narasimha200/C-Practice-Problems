#include<iostream>
using namespace std;
int main(){
    int n=5;
    int k=20;
    bool flage=false;
    int arr[n]={10,20,40,90,100};
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            cout<<"position "<<mid+1<<endl;
            flage=true;
            break;
        }
        else if(arr[mid] > k){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    if(!flage){
        cout<<"-1"<<endl;
    }
}