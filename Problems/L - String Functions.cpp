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
       int n,q;
       cin>>n>>q;
       string s;
       cin>>s;
       while(q--){
          string st;
          cin>>st;

           if(st =="pop_back"){
               s.pop_back();
           }else if(st=="back"){
               cout<< s.back() <<endl;
           }else if(st=="front"){
               cout<<s.front()<<endl;
           }else if(st== "print"){
               int x;
               cin>>x;
               cout<<s[x-1]<<endl;
           }else if(st=="push_back"){
               char l;
               cin>>l;
               s.push_back(l);
           }else if(st=="substr"){
              int x,y;
              cin>>x>>y;
              if(x>y){
                  swap(x,y);
              }
              cout<<s.substr(+x-1,(y-x)+1)<<endl;
          }else if(st=="sort"){
              int x,y;

              cin>>x>>y;
              if(x>y){
                  swap(x,y);
              }
              sort(s.begin()+x-1,s.begin()+y);
          }else if(st=="reverse"){
              int x,y;

              cin>>x>>y;
              if(x>y){
                  swap(x,y);
              }
              reverse(s.begin()+x-1,s.begin()+y);
          }
       }
   return 0;
}




