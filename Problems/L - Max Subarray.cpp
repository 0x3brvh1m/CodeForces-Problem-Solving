#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#define itn int
#include <string>
#include <cstdlib>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
 for(int  i = 0 ; i < n ; i++){
    cin>>arr[i];
    cout<<arr[i]<<" ";
 }
 int z = 0;
 int  i = 0 ;
 int mx;
 while(true){
        if(z == n - 1 ){
            break;
        }
    if(i==z){
        mx = max(arr[i],arr[i+1]);
    }else{
    mx = max(mx,arr[i+1]);
    }
    cout<<mx<<" ";
    i++;
    if(i==n-1){
        z++;
        i=z;
    }
 }
 cout<<endl;


}
}
