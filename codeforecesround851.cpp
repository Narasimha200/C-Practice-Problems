#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N];
int main(){
    int t;
    cin >> t;
    while(t--){
        bool flag=true;
        int minans=INT_MAX;
        int n;
        cin >> n;
        for(int i = 1; i <=n; i++){
            cin >> arr[i];
        }
        for(int i = 1; i <=n; i++){
            int ans1=1;
            int ans2=1;
            for(int j = 1; j<=i; j++){
                ans1=ans1*arr[j];
            }
            for(int j = i+1; j<=n; j++){
                ans2=ans2*arr[j];
            }
            if(ans1==ans2){
                if(minans==-1)
                minans=arr[i];
                else
                minans=min(minans,arr[i]);
            }
        }
        cout<<minans<<endl;
    }
}