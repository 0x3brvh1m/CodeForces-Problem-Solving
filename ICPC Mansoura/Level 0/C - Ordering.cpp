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

/*void swap(int&x,int&y){
int tmp = x;
x=y;
y=tmp;
}

void selectionSort(int arr[], int n){
    int mnIdx;
    for(itn i = 0 ; i < n-1 ; i++){
            mnIdx = i;
    for(int j = i+1 ; j<n ; j++){
        if(arr[j]<arr[mnIdx]){
            mnIdx = j;
        }
    }
    swap(arr[i],arr[mnIdx]);
    }
}

void backSort(int arr[], int n){
for(int i = n-1;i >= 0; i--){
    cout<<arr[i]<<" ";
}

}
void display(int arr[], int n ){
for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
*/


int main(){
itn n;
cin>>n;
int arr[n];
for(int i = 0; i < n; i++){
    cin>>arr[i];
}
sort(arr, arr+n);
for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
reverse(arr,arr+n);
for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<" ";
}

}

