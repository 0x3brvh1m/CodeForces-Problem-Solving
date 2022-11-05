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
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
int n;
cin>>n;
int arr[n];
for(itn i = 0 ; i<n ; i++){
    cin>>arr[i];
}
int ch=0,bi=0,ba=0;
for(int i = 0 ; i< n ; i++){
    if((i+1)%3==0){
        ba += arr[i];
    }else if(i%3==0){
    ch += arr[i];
    }else{
    bi+=arr[i];
    }
}
int mx = max(ch,max(bi,ba));
if(mx == ch){
    cout<<"chest"<<endl;
}else if(mx == bi){
cout<<"biceps"<<endl;
}else{
cout<<"back"<<endl;
}
}
