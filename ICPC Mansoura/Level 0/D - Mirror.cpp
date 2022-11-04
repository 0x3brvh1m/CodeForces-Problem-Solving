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
int n;
cin>>n;
int arrx[n/2];
int arr[n];
for(itn i = 0 ; i< n ; i++){
    cin>>arr[i];
}
sort(arr,arr+n);

for(int i = 0 ; i < (n/2); i++){
    arrx[i] = arr[i];
}

for(int i = 0 ; i < (n/2); i++){
    cout<<arrx[i]<<" ";
}
for(int i = (n/2)-1 ; i >=0; i--){
    cout<<arrx[i]<<" ";
}
cout<<endl;
reverse(arr,arr+n);
for(int i = 0 ; i < (n/2); i++){
    arrx[i] = arr[i];
}
for(int i = 0 ; i < (n/2); i++){
    cout<<arrx[i]<<" ";
}
for(int i = (n/2)-1 ; i >=0; i--){
    cout<<arrx[i]<<" ";
}
}


