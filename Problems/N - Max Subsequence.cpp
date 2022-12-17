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
           int n;
           cin>>n;
           vector<char>v(n);
           vector<char>t;
           cn(v);
           for(int i = 1 ; i <= n;i++){
               if(v[i]!=v[i-1]){
                t.push_back(v[i]);
               }

        }
           t.shrink_to_fit();
           cout<<t.size();

   return 0;
}




