#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <cmath>
#include <deque>
#include <iterator>
#include <numeric>
#include <bits/stdc++.h>
#include <string>
#define ll long long
#define cn(v) for(auto &(i):v)cin>>(i)
#define co(v) for(auto i:v)cout<<(i);
using namespace std;
int main(){
    ll t;
    cin>>t;
    vector<char>v(t);
    int x = 0;
    for(int i=0; i<t ; i++){
        cin>>v[i];
        if(i!=0){
            if(v[i]==v[i-1]){
                x++;
            }
        }
    }
    cout<<x;
    return 0;
}




