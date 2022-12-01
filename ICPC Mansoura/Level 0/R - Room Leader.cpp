#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main() {
int t;
string s="dff";
vector<int>v;
vector<string>v2;
cin>>t;
while(t--){
    string name;
    cin>>name;
    int score[7];
    for(int i = 0 ; i < 7 ; i++){
        cin>>score[i];
    }
    if(score[2]<150) score[2]=0;
    if(score[3]<300) score[3]=0;
    if(score[4]<450) score[4]=0;
    if(score[5]<600) score[5]=0;
    if(score[6]<750) score[6]=0;

    int fscore = score[0]*100-score[1]*50+score[2]+score[3]+score[4]+score[5]+score[6];
    v.push_back(fscore);
    v2.push_back(name);
}
int mx=v[0];
int id;
for(int i = 0 ; i < v.size() ; i++){
    if(v[i]>mx){
        id=i;
        mx=v[i];
    }
}
cout<<v2[id]<<endl;
 return 0;
}
