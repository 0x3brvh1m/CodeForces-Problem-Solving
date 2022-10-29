#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#define itn int
using namespace std;


int main(){
int n;
cin>>n;
int arr[n];
for(itn  i = 0;i<n;i++ ){
    cin>>arr[i];
}
int mn = arr[0];
for(int i = 1 ; i < n ; i++){
    if(arr[i]<mn){
        mn = arr[i];
    }
}

int c = 0;
for(int i = 0 ; i<n ;i++){
    if(arr[i]==mn){
        c++;
    }
}
if(c%2==1){
    cout<<"Lucky";
}else{
cout<<"Unlucky";
}

return 0;
}
