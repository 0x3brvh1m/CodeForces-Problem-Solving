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
            vector<string>v;
            string word = "";
            for (auto x : s)
            {
                if (x == ' ')
                {
                    v.push_back(word);
                    word = "";
                }
                else {
                    word = word + x;
                }
            }
            v.push_back(word);

          for(int i = 0 ;  i< v.size() ; i++){
              reverse(v[i].begin(),v[i].end());
          }

for(int i = 0 ; i < v.size() ; i++){
    if(i!=v.size()-1){
        cout<<v[i]<<" ";
    }else{
        cout<<v[i];
    }
}

   return 0;
}




