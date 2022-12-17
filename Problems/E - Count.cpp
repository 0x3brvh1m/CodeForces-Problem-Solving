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
        int sum = 0;
        for(int i = 0 ; i < s.size() ; i++){
            sum+=(s[i]-'0');
            
        }
        cout<<sum<<endl;
   return 0;
}




