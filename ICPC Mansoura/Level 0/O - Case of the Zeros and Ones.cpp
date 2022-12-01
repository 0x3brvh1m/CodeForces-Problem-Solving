#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <cmath>
#define ll long long
using namespace std;
int main() {
   int n;
   int k=0;
   cin>>n;
   char arr[n];
   int one=0;
   int zero=0;
   for(int i = 0 ; i < n ; i++){
       cin>>arr[i];
       if(arr[i]=='1') one++;
       else zero++;
   }
   cout<<abs(zero-one)<<endl;
    return 0;
}
