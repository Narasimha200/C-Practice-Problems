#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string name = "abcde";
    sort(name.begin(),name.end());
    cout<<*(name.end()-1)<<endl;
}