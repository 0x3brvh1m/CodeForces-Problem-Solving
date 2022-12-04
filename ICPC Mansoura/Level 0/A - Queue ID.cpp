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
    queue<ll>q;
    while(t--){
        ll id,n;
        cin>>id>>n;
        if(id == 1 ){
            q.push(n);
        }else{
            if(!q.empty()){
                int x = q.front();
                q.pop();
                if(x==n){
                    cout<<"yes"<<endl;
                }else{
                    cout<<"no"<<endl;
                }
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
    }





