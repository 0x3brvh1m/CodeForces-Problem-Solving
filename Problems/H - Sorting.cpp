#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;

//swap
void swap(int&x,int&y){
int temp = x;
x=y;
y=temp;
}


//selection sort function
void selectionSort(int arr[],int n){

int minIdx;

for(int i = 0 ; i < n-1 ; i++){
    minIdx = i;
    for(int j = i+1 ; j<n ; j++){
        if(arr[j]<arr[minIdx]){
            minIdx = j;
        }
    }
    swap(arr[minIdx],arr[i]);
}
}

//print
void printArr(int arr[],int n){
for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<" ";
}
}

int main(){
    int n;
    cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
selectionSort(arr,n);
printArr(arr,n);
}
