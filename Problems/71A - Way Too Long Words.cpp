#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;



int main() {
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if(s.length()>10){
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }else{
        cout<<s<<endl;
    }
}
    return 0;
}


