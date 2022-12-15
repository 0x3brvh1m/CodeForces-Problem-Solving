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
       string s;
       cin>>s;
       set<char>set1 (s.begin(),s.end());
       vector<char>v (set1.begin(),set1.end());
      vector<int>k(v.size());
    for(int j = 0; j<v.size();j++){
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]==v[j]){
                k[j]++;
            }
    }
}
    for(int  i = 0 ; i < k.size();i++){
        cout<<v[i]<<" : "<<k[i]<<endl;
    }
   return 0;
}




