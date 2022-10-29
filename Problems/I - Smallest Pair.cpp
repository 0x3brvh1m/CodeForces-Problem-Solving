#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){

int testCases;
cin>>testCases;

while(testCases--){
    long long sum=0 , mn=1e9;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
for(int i = 0 ; i < n ; i++)
    {
    for(int  j = i+1 ; j < n ; j++)
    {
       sum =  arr[i] + arr[j] +(j+1) - (i+1);
if(sum<mn){
    mn=sum;
    sum = 0;
}
    }

}
cout<<mn<<endl;
}


return 0;
}
