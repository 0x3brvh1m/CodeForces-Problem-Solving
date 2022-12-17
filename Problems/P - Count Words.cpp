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
#define co(v) for(auto i:v)cout<<(i)
using namespace std;


        int main() {
          int c = 1 ;
          string s;

            getline(cin,s);
           for(int i = 1 ; i < s.size() ; i++){
               if(!(s[i]>='A'&&s[i]<='z') && s[i+1]>='A' && s[i+1]<='z'){
                   c++;
               }
           }
           cout<<c;
   return 0;
}




