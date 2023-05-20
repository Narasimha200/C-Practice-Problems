// Idea is maintain two variables 
// currSum and maxSum
// currSum:- This is to add each arr[i] sum 
    // if currSum<0 then we update currSum=0
// maxSum:- This is to store the max Subarray 
  // if currSum > maxSum then update maxSum = currSum
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[15]={-2,-3,4,-1,-2,1,5,-3,-50,4,5,6,7,8,-1};
    int maxSum=INT_MIN;
    int currSum=0;
    int start;
    int s=0;
    int end;
    for(int i=0;i<15;i++){
        currSum+=arr[i];
        if(currSum > maxSum){
            start=s;
            end=i;
            maxSum=currSum;
        }
        if(currSum < 0){
            currSum=0;
            s=i+1;
        }
    }
    cout<<maxSum<<endl;
    cout<<start<<" "<<end<<endl;
    while(start<=end){
        cout<<arr[start]<<" ";
        start++;
    }
    return 0;
}