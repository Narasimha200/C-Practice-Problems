/* In algorithm we place every number in it's correct index(Position)
correct place means before this element all the element are less than that element and after elements is greater than which we is we place but not sorted in them self
we call two functions first for first array from start to position-1 and one of position+1 to n-1*/
#include<iostream>
#include<algorithm>
using namespace std;
void swap(int *arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r){
//we are taking last element as pivote element(pivote is a element which we want to place is in the correct position)
    int pivote=arr[r];
//  we keep two variables pointing to first element and last element
// we start i from before first element
// i donotes last elment where arr[i] is less than pivote element
    int i=l-1;
// j will start from first element of array it helps to shift those all elements less than pivote elemet
// we run this j up to less than pivote element this is last element
    int j=l;
    while(j<r){
        if(arr[j]<pivote){
            i++;
            swap(arr,i,j);
        }
        j++;
    }
    swap(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[],int l,int r){
    // we enter into loop if l is less than r because it means it has only one element left
    if(l<r){
        //pi is index of element which is correctly placed in the array
        int pi=partition(arr,l,r);
    // one function for sorting left array of pivote element
        quickSort(arr,l,pi-1);
    // one function for soring right array of pivote+1 to right
        quickSort(arr,pi+1,r);
    }
}
int main(){
    int n=7;
    int arr[7]={6,3,9,5,2,8,7};
    int arr2[7]={7,6,5,4,3,2,1};
    // we sent two variables pointing to first element and last element
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    quickSort(arr2,0,n-1);
    cout<<"after function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}