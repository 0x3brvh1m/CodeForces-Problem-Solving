#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#define itn int
#define fro for
#include <string>
#include <cstdlib>
#define ll long long
#include <cstring>
#include<bits/stdc++.h>
using namespace std;

int main(){
int n,q;
cin>>n>>q;
int arr[n];
for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
}

for(int i = 0 ; i < q ; i++){
   int l,r,x,c=0;
   cin>>l>>r>>x;
   for(int j = l-1 ; j < r ; j++){
    if(x==arr[j]){
        c++;
    }
   }
   cout<<c<<endl;
}

return 0;
}


