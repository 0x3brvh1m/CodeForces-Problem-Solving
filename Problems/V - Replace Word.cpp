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


int main() {
    string s;
    cin>>s;
   string p = "EGYPT";
 s = regex_replace(s,regex(p)," ");
 cout<<s;
    return 0;
}




