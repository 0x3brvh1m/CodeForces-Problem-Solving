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
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]>=96){
                s[i]-=32;
            }else if(s[i]==','){
                s[i]=' ';
            }
            else{
                s[i]+=32;
            }
        }
        cout<<s<<endl;


   return 0;
}




