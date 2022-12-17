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
            int n;
            cin>>n;
            int arr[123] = {};
            for(int i = 0 ; i < n ; i++){
                char s;
                cin>>s;
                arr[s]++;
            }
for(int i = 0 ; i < 123 ; i++){
    if(arr[i]!=0)
        while(arr[i]--)
    cout<<(char)i;
}

   return 0;
}




