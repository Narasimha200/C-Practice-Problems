#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,q; cin >> n >> q;
        long arr[n+1];
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        while(q--){
            int l,r;
            long k;
            cin >> l >> r;
            cin >> k;
            long long sum = 0;
            for(int i = 1; i <= n; i++){
                if(i>=l && i<=r)
                sum = sum + k;
                else
                sum = sum + arr[i];
            }
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}