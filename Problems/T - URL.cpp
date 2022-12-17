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
    string s;
    cin>>s;
    char c = '?';
    int index = s.find(c);
    for(int i = index+1 ; i < s.size() ; i ++){

            if(s[i] == '='){
                cout<<": ";
                i++;
            }else if(s[i]=='&'){
                cout<<endl;
                i++;
            }
            cout<<s[i];

    }
    return 0;
}




