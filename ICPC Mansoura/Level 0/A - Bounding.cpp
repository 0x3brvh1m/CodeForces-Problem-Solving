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
using namespace std;

int main(){
int n,x;
cin>>n>>x;
int arr[n];
itn c = 1;
int sum=0;
for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
    sum+=arr[i];
    if(sum<=x){
        c++;
    }
}
cout<<c<<endl;
}

