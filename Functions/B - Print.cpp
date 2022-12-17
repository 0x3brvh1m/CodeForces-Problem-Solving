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
#define itn int
#include <regex>
#define ll long long
#define cn(v) for(auto &(i):v)cin>>(i)
#define co(v) for(auto i:v)cout<<(i)
using namespace std;

void add(ll x){
    for(int i = 1 ; i <= x ; i++){
        if(i == x){
            cout<<x;
        }else
        cout<<i<<" ";
    }
}
int main() {
    ll x;
    cin>>x;
    add(x);
    return 0;
}




