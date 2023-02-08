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
    int n;
    cin>>n;
    int num = 0;
    vector<int>h(n),z(n);
    for(int i = 0 ; i < n ; i ++){
        cin>>h[i]>>z[i];
        for(int j = 0 ; j < i ; j ++){
            if(h[i]==z[j]){
                num++;

            }
            if(z[i]==h[j]){
                num++;
            }
        }
    }
    cout<<num<<endl;
   return 0;

}



 
