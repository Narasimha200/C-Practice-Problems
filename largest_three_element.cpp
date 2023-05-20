#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[10]={-1,-2,-10,-56,-12,-11,-5,-9,-60,-100};
    int first=INT_MIN;
    int second=INT_MIN;
    int third=INT_MIN;
    for(int i = 0; i < 10; i++){
        if(arr[i] > first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i] > second  && arr[i]!=first){ // in case of duplicates
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i]!=second){ // in case of duplicates
            third = arr[i];
        }
    }
    cout<<"First:- "<<first<<endl<<"Second:- "<<second<<endl<<"Third:- "<<third<<endl;
}