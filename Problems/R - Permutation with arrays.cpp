#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#define itn int
#define fro for
#include <string>
#include <cstdlib>
using namespace std;

void swap(int&x,int&y){
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




int main(){
  int n,c=0;
  cin>>n;
  int arr1[n],arr2[n];
  for(int i = 0 ; i < n ; i++){
    cin>>arr1[i];
  }
  for(int i = 0 ; i < n ; i++){
    cin>>arr2[i];
  }
selectionSort(arr1,n);
selectionSort(arr2,n);

for(int i = 0 ; i < n ; i++){
    if(arr1[i] == arr2[i]){
        c++;
    }else{
    cout<<"no"<<endl;
    break;
    }
}
if(c==n){
    cout<<"yes"<<endl;
}
return 0;
}

