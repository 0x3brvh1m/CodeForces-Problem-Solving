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
    char arr[1000][1000];
    string s;
    cin>>s;
    int r=0,c=0,R=0,L=0,o=0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'R'){
arr[r][c] = s[i];
R++;
        }else{
            arr[r][c] = s[i];
            L++;
        }
        c++;
        if(R==L && (R > 0 || L > 0)){
            o++;
            r++;
            c=0;
            R=0;
            L=0;
        }
    }

    cout<<o<<endl;
    for(int  i = 0 ; i <r ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}




