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
int n,x,c=0;
cin>>n>>x;
int arr[n];
for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
    if(arr[i]==x) {
        cout<<i<<endl;
        break;
    }else{
    c++;
    }
}
int ln = sizeof(arr)/sizeof(arr[0]);
if(c==ln){
    cout<<"Not Found"<<endl;
}
}


