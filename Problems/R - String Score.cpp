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
    int x = 0;
    int n;
    cin>>n;
    string v;
    cin>>v;
    for(int i = 0 ; i < v.length() ; i++){
        char c = v[i];
        switch(c){
            case 'V' : x+=5;break;
            case 'W': x+=2;break;
            case 'X':  if(i!= v.size()-1)v[i+1]='0';
                break;
            case 'Y': v.push_back(v[i+1]);v[i+1]='0';
                break;
            case 'Z':
                if(i!= v.size()-1){
                    if(i!= v.size()-1){
                    if(v[i+1]=='V') {
                        x/=5;
                        v[i+1]='0';

                    }else if(v[i+1]=='W'){
                        x/=2;
                        v[i+1]='0';
                    }}
                }


            break;
            default:break;
                }
        }


    cout<<x<<endl;
    return 0;
}




