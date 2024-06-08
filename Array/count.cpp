#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {1,2,2,3,3,3,4,5};
    map<int,int> mp;
    for(int &i:arr){
        mp[i]++;
    }
    for(auto &i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
