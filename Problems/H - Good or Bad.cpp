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
           string s;
           cin>>s;
           if(s.find("010") != std::string::npos||s.find("101") != std::string::npos){
               cout<<"Good"<<endl;
           }else{
               cout<<"Bad"<<endl;
           }

       }

   return 0;
}




