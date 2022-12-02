#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;



int main() {
ll t;
cin>>t;
while(t--){
 ll m,s;
 cin>>m>>s;
 ll v[m];
 vector<ll>nums;
 ll sum = 0;
 for(int  i = 0 ; i<m ; i++){
     cin>>v[i];
 }
 ll max = *max_element(v,v+m);
for(ll i = 0 ; i <= max ; i++){
    nums.push_back(i);
}
bool flag = false;
for(ll i = 0 ; i < m ; i++){
    nums.erase(remove(nums.begin(),nums.end(),v[i]),nums.end());
}
sum= accumulate(nums.begin(),nums.end(),sum);
if(sum==s){
    cout<<"YES"<<endl;
}else if(sum>s){
    cout<<"NO"<<endl;
}else if(sum<s){
    for(ll i = max+1 ; i <= 1000 ; i++ ){
        sum+=i;
        if(sum==s){
            cout<<"YES"<<endl;
            flag = true;
            break;
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
    }
}else cout<<"NO"<<endl;


}
    return 0;
}


