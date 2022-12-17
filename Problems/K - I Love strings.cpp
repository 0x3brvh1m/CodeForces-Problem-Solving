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
#define ll long long
#define cn(v) for(auto &(i):v)cin>>(i)
#define co(v) for(auto i:v)cout<<(i);
using namespace std;
    int main() {
        int t;
        cin>>t;
        while(t--){
            string s,t;
            cin>>s>>t;
            int mx = max(s.size(),t.size());
            for(int i = 0; i<mx;i++){
                if(s.size()>=t.size()){
                if(i<t.length()){
                    cout<<s[i]<<t[i];
                }else{
                    cout<<s[i];
                }
                }else{
                    if(t.size()>=s.size()){
                        if(i<s.length()){
                            cout<<s[i]<<t[i];
                        }else{
                            cout<<t[i];
                        }
                }
            }}
            cout<<endl;

            }



   return 0;
}




