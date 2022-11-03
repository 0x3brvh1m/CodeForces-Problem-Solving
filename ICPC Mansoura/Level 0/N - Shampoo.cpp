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
int v,a,b,c;
cin>>v>>a>>b>>c;
for(;;){
    v -=a;
    if(v<0){
        cout<<"F";
        break;
    }
    v -=b;
    if(v<0){
      cout<<"M";
        break;
    }
    v -=c;
    if(v<0){
    cout<<"T";
        break;}
}
}

