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
       string x = s;
        reverse(s.begin(),s.end());
        if(x==s){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

   return 0;
}




