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
ll n,k;
cin>>n>>k;
if(k>(n+1)/2){
    cout<<(k-((n+1)/2))*2<<endl;
}else{
    cout<<(k*2)-1<<endl;
}
}

