#include<iostream>
using namespace std;
void merge(int original_array[],int low,int mid,int high){
    // we need to make to temp arrays to perform merge
    // left array size mid-low+1
    int leftArraySize = mid - low + 1;
    int rightArraySize = high - mid;
    // temparrays
    int *leftArray = new int[leftArraySize];
    int *rightArray = new int[rightArraySize];
    for(int i=0;i<leftArraySize;i++){
        leftArray[i] = original_array[i+low];
    }
    for(int j=0;j<rightArraySize;j++){
        rightArray[j] = original_array[j+mid+1];
    }
    // we need to maintain a index to original array   to copy temp array elements to original array 
    int k = low;
    int i = 0;
    int j = 0;
    while(i < leftArraySize && j < rightArraySize){
        if(leftArray[i] <= rightArray[j]){
            original_array[k] = leftArray[i];
            k++; i++;
        }
        else{
            original_array[k] = rightArray[j];
            k++; j++;
        }
    }
    // if there are any elements present in leftArray
    while(i < leftArraySize){
        original_array[k] = leftArray[i];
        i++; k++;
    }
    // if there are any element present in rightArray
    while(j < rightArraySize){
        original_array[k] = rightArray[j];
        j++; k++;
    }

    delete leftArray;
    delete rightArray;
}
// implementing mergesort function
void mergeSort(int original_array[],int low,int high){
    if( low < high) {    // if more than one element present 
        int mid = low + (high - low)/2;
        mergeSort(original_array, low, mid);
        mergeSort(original_array,mid+1,high);
        merge(original_array,low,mid,high);
    }
}
int main(){
    int n;
    cin >> n;
    int original_array[n];
    // taking array elements input
    for(int i = 0; i < n; i++){
        cin >> original_array[i];
    }
    mergeSort(original_array,0,n-1);
    for(int k=0;k<n;k++){
        cout<<original_array[k]<<" ";
    }

}